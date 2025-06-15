#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <vector>
#include "MisFunciones.h"
#include "Estructuras.h"

using namespace std;
using namespace System;


class Usuario {
private:
	string nombre;
	string password;
	string id;
public:
	Usuario() {
		nombre = "";
		password = "";
		id = "";
	}
	Usuario(string nombre, string password, string id) {
		this->nombre = nombre;
		this->password = password;
		this->id = id;
	}
	
	string getID() {return id; }
	string getPassword() { return password; }
	string getNombre() { return nombre; }

	void setID(string id) {
		this->id = id;
	}

	void registrar(LinkedList<Usuario>& listaUsuarios) {
		int anchoConsola = Console::WindowWidth;
		string nombre, password, id;

		Console::SetCursorPosition((anchoConsola - 25) / 2, 18);
		cout << "Ingrese su nombre: ";
		cin >> nombre;

		Console::SetCursorPosition((anchoConsola - 25) / 2, 19);
		cout << "Ingrese su contrasena: ";
		cin >> password;

		Console::SetCursorPosition((anchoConsola - 25) / 2, 20);
		cout << "Ingrese su id: ";
		cin >> id;

		auto validarDuplicado = [&listaUsuarios](string id) {
			return listaUsuarios.buscar(id) != nullptr;
			};

		if (validarDuplicado(id)) {
			cout << "\n[!] El ID ya esta registrado.\n";
		}
		else {
			Usuario nuevoUsuario(nombre, password, id);
			listaUsuarios.insertar(nuevoUsuario);
			cout << "\n[+] Cliente registrado exitosamente.\n";
		}
	}

	bool iniciarSesion(LinkedList<Usuario>& listaUsuarios) {
		int anchoConsola = Console::WindowWidth;
		string id, password;

		Console::SetCursorPosition((anchoConsola - 25) / 2, 18);
		cout << "Ingrese su ID: ";
		cin >> id;

		Console::SetCursorPosition((anchoConsola - 25) / 2, 19);
		cout << "Ingrese su contrasena: ";
		cin >> password;

		Usuario* user = listaUsuarios.buscar(id);
		if (user != nullptr && user->getPassword() == password) {
			cout << "\n[+] Inicio de sesion exitoso. Bienvenido, " << user->getNombre() << "!\n";
			return true;
		}
		else {
			cout << "\n[!] ID o contrasena incorrecta.\n";
			return false;
		}
	}

	void cambiarPass() {
		//pendiente 
		//falta asegurar q el tipo de datos sea correcto para el usuario
	}
};

class Producto {
private:
	string id;
	string nombre;
	double precio;
	string marca;
public:
	Producto(string nombre, double precio, string marca, string id) {
		this->nombre = nombre;
		this->precio = precio;
		this->marca = marca;
		this->id = id;
	}


};

class Pedido {
private:
	Usuario* usuario;
	vector<Producto> productos;
};


int main() {
	int op;
	LinkedList<Usuario> listaUsuarios;
	mostacho();

	while (1) {
		Console::Clear();
		op = menuInicioRegistro();
		Usuario usuario;

		if (op == 1) {
			if (usuario.iniciarSesion(listaUsuarios)) {
				while (true) {
					Console::Clear();


					int opcionTipoUsuario = menuSeleccionUsuario();

					

					system("pause");
				}
			}
			else {
				cout << "\n[!] No se pudo iniciar sesion. Intente nuevamente o registrese.\n";
				system("pause");
			}
		
		}
		else if (op == 2) {
			usuario.registrar(listaUsuarios);
			system("pause");
		}
	}
};


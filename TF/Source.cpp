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
		
		string nombre, password, id;
		cout << "Ingrese su nombre: ";
		cin >> nombre;
		cout << "Ingrese su password: ";
		cin >> password;
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
		string id, password;
		cout << "Ingrese su ID: ";
		cin >> id;
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

	}
};

class Producto {

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
					int opcionMenu = menuPantalla();

					if (opcionMenu == 7) break;

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

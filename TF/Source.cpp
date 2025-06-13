#include <iostream>
#include <conio.h>
#include <Windows.h>


using namespace std;
using namespace System;

void mostacho() {
	Console::Clear();
	Console::ForegroundColor = ConsoleColor::DarkYellow;
	int anchoConsola = Console::WindowWidth;

	string linea1 = "         #####        #####        ";
	string linea2 = " #     ######################     #";
	string linea3 = "###   ########################   ###";
	string linea4 = " ################################## ";
	string linea5 = "  ###############  ############### ";
	string linea6 = "   ############      ############   ";

	Console::SetCursorPosition((anchoConsola - linea1.length()) / 2, 6); cout << linea1 << endl;
	Console::SetCursorPosition((anchoConsola - linea2.length()) / 2, 7); cout << linea2 << endl;
	Console::SetCursorPosition((anchoConsola - linea3.length()) / 2, 8); cout << linea3 << endl;
	Console::SetCursorPosition((anchoConsola - linea4.length()) / 2, 9); cout << linea4 << endl;
	Console::SetCursorPosition((anchoConsola - linea5.length()) / 2, 10); cout << linea5 << endl;
	Console::SetCursorPosition((anchoConsola - linea6.length()) / 2, 11); cout << linea6 << endl;

	Console::ForegroundColor = ConsoleColor::White;
	string mensaje = "Presiona cualquier tecla para continuar...";
	Console::SetCursorPosition((anchoConsola - mensaje.length()) / 2, 15);
	cout << mensaje << endl;

	_getch();
}

int main() {
	int op;

	mostacho();

	while (1) {
		Console::Clear();

		cout << "::::::::::RAPPI::::::::::" << endl;
		cout << "1. Registrar cliente" << endl;
		cout << "2. Iniciar sesion" << endl;
		cout << "3. Realizar pedido" << endl;
		cout << "4. Mostrar pedidos realizados" << endl;
		cout << "5. Ordenar pedidos por precios" << endl;
		cout << "6. Filtrar pedidos por cliente" << endl;
		cout << "7. Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> op;

		if (op == 1) {
			system("pause");
		}
		else if (op == 2) {
			system("pause");
		}
	
	}
}

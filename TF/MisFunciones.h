#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;

void mostacho() { //simbolo de rappi

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

int menuInicioRegistro() {
	Console::Clear();
	Console::ForegroundColor = ConsoleColor::Cyan;
	int anchoConsola = Console::WindowWidth;

	string login[] = {
		"    ###   ",
		"   #####  ",
		"    ###   ",
		"  ####### ",
		"  ####### "
	};

	string registro[] = {
		"  |=======|",
		"  |       |",
		"  |  Reg  |",
		"  |       |",
		"  |=======|"
	};
	

	int xLogin = (anchoConsola / 2) - 25;
	int xRegistro = (anchoConsola / 2) + 5;
	int y = 6;

	for (int i = 0; i < 5; i++) {
		Console::SetCursorPosition(xLogin, y + i);
		cout << login[i];

		Console::SetCursorPosition(xRegistro, y + i);
		cout << registro[i];
	}

	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(xLogin, y + 6);
	cout << "[1] Iniciar Sesion";

	Console::SetCursorPosition(xRegistro, y + 6);
	cout << "[2] Registrarse";

	short op;
	Console::SetCursorPosition((anchoConsola - 25) / 2, y + 9);
	
	cout << "Ingrese la opcion: ";
	cin >> op;

	return op;
}

int menuSeleccionUsuario() {
	Console::Clear();
	Console::ForegroundColor = ConsoleColor::Cyan;
	int anchoConsola = Console::WindowWidth;

	string usuario[] = {
		"    ###   ",
		"   #####  ",
		"    ###   ",
		"  ####### ",
		"  ####### "
	};

	int x = anchoConsola / 2;
	int y = 9;

	for (int i = 0; i < 5; i++) {
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(x - 40, y+i);
		cout << usuario[i];

		Console::ForegroundColor = ConsoleColor::Yellow;
		Console::SetCursorPosition(x - 10, y+i);
		cout << usuario[i];

		Console::ForegroundColor = ConsoleColor::DarkMagenta;
		Console::SetCursorPosition(x + 20, y+i);
		cout << usuario[i];
	}

	Console::ForegroundColor = ConsoleColor::White;

	Console::SetCursorPosition(x - 40, y+5);
	cout << "[1] Cliente" << endl;

	Console::SetCursorPosition(x - 10, y+5);
	cout << "[2] Repartidor" << endl;

	Console::SetCursorPosition(x + 20, y+5);
	cout << "[3] Emprendedor/Dueno de tienda" << endl;
	short op;

	cout << endl;
	cout << "Ingrese la opcion: "; 
	cin >> op;
	return op;
}

int menuPantalla() {
	short op;

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

	return op;
}

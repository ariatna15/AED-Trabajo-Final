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
	
	string cambio[] = {
		"  ###### ",
		" #       ",
		" #       ",
		" #       ",
		"  ###### "
	};

	int xLogin = (anchoConsola / 2) - 40;
	int xRegistro = (anchoConsola / 2) - 10;
	int xCambio = (anchoConsola / 2) + 11;
	int y = 6;

	for (int i = 0; i < 5; i++) {
		Console::SetCursorPosition(xLogin, y + i);
		cout << login[i];

		Console::SetCursorPosition(xRegistro, y + i);
		cout << registro[i];

		Console::SetCursorPosition(xCambio, y + i);
		cout << cambio[i];
	}

	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(xLogin, y + 6);
	cout << "[1] Iniciar Sesion";

	Console::SetCursorPosition(xRegistro, y + 6);
	cout << "[2] Registrarse";

	Console::SetCursorPosition(xCambio, y + 6);
	cout << "[3] Cambio de contraseña";

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
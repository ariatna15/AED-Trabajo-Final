#pragma once
#include <iostream>
#include <string>
using namespace std;

struct MetodoPago {
    virtual void mostrar() const = 0;
    virtual ~MetodoPago() {}
};

struct Efectivo : MetodoPago {
    double monto;
    Efectivo(double monto = 0.0) : monto(monto) {}
    void mostrar() const override {
        cout << "Pago en efectivo: " << monto << " soles" << endl;
    }
};

struct Tarjeta : MetodoPago {
    string numTarjeta;
    Tarjeta(string numTarjeta = "") : numTarjeta(numTarjeta) {}
    void mostrar() const override {
        cout << "Pago con tarjeta: " << numTarjeta << endl;
    }
};
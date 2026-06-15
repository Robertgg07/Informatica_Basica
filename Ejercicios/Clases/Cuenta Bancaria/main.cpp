#include "cuenta_bancaria.hpp"
#include <iostream>

int main() {

    Cuenta_Bancaria cuenta("Robert", 123456, 500.0);

    std::cout << "Estado inicial:\n";
    cuenta.Mostrar();

    std::cout << "\nIngresando 100 euros...\n";
    cuenta.IngresarDinero(100);

    std::cout << "\nRetirando 50 euros...\n";
    cuenta.RetirarDinero(50);

    std::cout << "\nEstado final:\n";
    cuenta.Mostrar();

    return 0;
}
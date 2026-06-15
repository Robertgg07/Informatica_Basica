#include "Estudiante.hpp"
#include <iostream>

int main() {

    Estudiante estudiante1("Ana", 19, 8.5);
    Estudiante estudiante2("Luis", 20, 4.2);
    Estudiante estudiante3("Marta", 18, 9.7);

    estudiante1.Mostrar();
    if (estudiante1.Aprobado()) {
        std::cout << "Aprobado\n";
    } else {
        std::cout << "Suspenso\n";
    }

    std::cout << '\n';

    estudiante2.Mostrar();
    if (estudiante2.Aprobado()) {
        std::cout << "Aprobado\n";
    } else {
        std::cout << "Suspenso\n";
    }

    std::cout << '\n';

    estudiante3.Mostrar();

    if (estudiante3.Honor()) {
        std::cout << "Matricula de honor\n";
    }

    return 0;
}
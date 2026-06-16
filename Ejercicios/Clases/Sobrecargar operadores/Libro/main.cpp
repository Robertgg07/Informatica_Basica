#include "Libro.hpp"
#include <iostream>

int main() {

    Libro libro1("Don Quijote", 5);
    Libro libro2("Los gabos de gabo", 1.99);

    std::cout << libro1 << std::endl;
    std::cout << libro2 << std::endl;


    return 0;
}
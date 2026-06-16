#include "Complejo.hpp"
#include <iostream>

int main() {

    Complejo c1(1,2);
    Complejo c2(3,4);

    Complejo suma = c1 + c2;
    Complejo resta = c1 - c2;

    std::cout << suma << std::endl;
    std::cout << resta << std::endl;


    return 0;
}
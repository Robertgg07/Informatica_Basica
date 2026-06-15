#include "separar.hpp"
#include <fstream>
#include <iostream>

void SepararNumeros(const char* ficheroEntrada, const char* ficheroPares, const char* ficheroImpares) {

    std::ifstream entrada(ficheroEntrada);
    std::ofstream pares(ficheroPares);
    std::ofstream impares(ficheroImpares);

    if (!entrada) {
        std::cout << "Error al abrir el fichero de entrada.\n";
        return;
    }

    int numero;

    while (entrada >> numero) {
        if (numero % 2 == 0) {
            pares << numero << " ";
        } else {
            impares << numero << " ";
        }
    }
}
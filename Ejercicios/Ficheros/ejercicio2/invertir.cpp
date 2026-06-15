#include "invertir.hpp"
#include <fstream>
#include <iostream>
#include <vector>

void MostrarInverso(const char* nombre_fichero) {
    std::ifstream fichero(nombre_fichero);

    if (!fichero) {
        std::cout << "Error al abrir el fichero.\n";
        return;
    }

    int n;
    fichero >> n;

    std::vector<int> numeros(n);

    for (int i = 0; i < n; i++) {
        fichero >> numeros[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        std::cout << numeros[i];

        if (i > 0) {
            std::cout << " ";
        }
    }

    std::cout << std::endl;
}
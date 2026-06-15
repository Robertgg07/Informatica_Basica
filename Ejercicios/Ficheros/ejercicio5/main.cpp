#include <iostream>

#include "comparar_ficheros.hpp"

int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cerr << "Uso: " << argv[0] << " fichero1 fichero2\n";
        return 1;
    }

    int resultado = PrimeraDiferencia(argv[1], argv[2]);

    if (resultado == -1) {
        std::cerr << "Error al abrir los ficheros.\n";
    }
    else if (resultado == 0) {
        std::cout << "Los ficheros son exactamente iguales.\n";
    }
    else {
        std::cout << "La primera diferencia aparece en la linea " << resultado << ".\n";
    }

    return 0;
}
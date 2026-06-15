#include <iostream>

#include "lineas.hpp"

int main(int argc, char* argv[]) {

    if (argc != 3) {
        std::cerr << "Uso: " << argv[0] << " fichero_entrada.txt fichero_salida.txt\n";
        return 1;
    }

    lineas(argv[1], argv[2]);

    return 0;
}
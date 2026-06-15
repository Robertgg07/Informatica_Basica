#include "eliminar_palabra.hpp"
#include <iostream>

int main(int argc, char* argv[]) {

    if (argc != 4) {
        std::cout << "Uso: ./eliminar_palabra entrada salida palabra\n";
        return 1;
    }

    EliminarPalabra(argv[1], argv[2], argv[3]);

    return 0;
}
#include <iostream>
#include "wordCount.hpp"

int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cerr << "Uso: " << argv[0] << " fichero.txt\n";
        return 1;
    }

    std::string nombre_fichero = argv[1];

    std::cout << ContarLineas(nombre_fichero) << " " << ContarPalabras(nombre_fichero) << " " << ContarCaracteres(nombre_fichero) << std::endl;

    return 0;
}
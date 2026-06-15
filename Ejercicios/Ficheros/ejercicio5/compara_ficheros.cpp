#include "comparar_ficheros.hpp"

#include <fstream>
#include <string>

int PrimeraDiferencia(const std::string& fichero1, const std::string& fichero2) {

    std::ifstream archivo1(fichero1);
    std::ifstream archivo2(fichero2);

    if (!archivo1 || !archivo2) {
        return -1;
    }

    std::string linea1;
    std::string linea2;

    int numero_linea{1};

    while (true) {

        bool leido1 = static_cast<bool>(getline(archivo1, linea1));
        bool leido2 = static_cast<bool>(getline(archivo2, linea2));

        if (!leido1 && !leido2) {
            return 0; // iguales
        }

        if (leido1 != leido2) {
            return numero_linea;
        }

        if (linea1 != linea2) {
            return numero_linea;
        }

        numero_linea++;
    }
}
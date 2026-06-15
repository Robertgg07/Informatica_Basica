#include "wordCount.hpp"

#include <fstream>
#include <string>
#include <cctype>

int ContarLineas(const std::string& nombre_fichero) {
    std::ifstream fichero(nombre_fichero);

    int lineas{0};
    std::string linea;

    while (getline(fichero, linea)) {
        lineas++;
    }

    return lineas;
}

int ContarPalabras(const std::string& nombre_fichero) {
    std::ifstream fichero(nombre_fichero);

    int palabras{0};
    std::string linea;

    while (getline(fichero, linea)) {

        bool dentro_palabra{false};

        for (char c : linea) {
            if (isspace(c)) {
                dentro_palabra = false;
            } else {
                if (!dentro_palabra) {
                    palabras++;
                    dentro_palabra = true;
                }
            }
        }
    }

    return palabras;
}

int ContarCaracteres(const std::string& nombre_fichero) {
    std::ifstream fichero(nombre_fichero);

    int caracteres{0};
    std::string linea;

    while (getline(fichero, linea)) {
        caracteres += linea.size() + 1; // +1 por '\n'
    }

    return caracteres;
}
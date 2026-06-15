#include "eliminar_palabra.hpp"
#include <fstream>
#include <iostream>

void EliminarPalabra(const std::string& entrada, const std::string& salida, const std::string& palabra) {

    // Abrimos el fichero de entrada para leer
    std::ifstream fichero_entrada(entrada);

    // Abrimos el fichero de salida para escribir
    std::ofstream fichero_salida(salida);

    // Comprobamos que el fichero de entrada se ha abierto bien
    if (!fichero_entrada) {
        std::cout << "Error al abrir el fichero de entrada\n";
        return;
    }

    // Variable donde iremos guardando cada palabra leída
    std::string palabra_leida;

    // Lee palabras hasta llegar al final del fichero
    while (fichero_entrada >> palabra_leida) {

        // Si la palabra leída NO es la que queremos eliminar
        if (palabra_leida != palabra) {

            // La copiamos al fichero de salida
            fichero_salida << palabra_leida << " ";
        }
    }
}
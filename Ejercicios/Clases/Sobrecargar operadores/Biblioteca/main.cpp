#include <iostream>
#include <fstream>
#include "Libro.hpp"
#include "Biblioteca.hpp"

int main() {

    Libro libro1("Don Quijote", 25);
    Libro libro2("La Celestina", 15);

    Biblioteca biblioteca;

    biblioteca.añadir_libro(libro1);
    biblioteca.añadir_libro(libro2);

    std::cout << "Libros de la biblioteca:\n";
    biblioteca.mostrar_todos_libros();

    std::cout << "\nPrecio total: "
              << biblioteca.precio_total()
              << " €\n";

    if (biblioteca.buscar_libro("Don Quijote")) {
        std::cout << "\nLibro encontrado\n";
    } else {
        std::cout << "\nLibro no encontrado\n";
    }

    // Guardar libro en fichero
    std::ofstream salida("libro.txt");

    if (salida) {
        libro1.guardar_fichero(salida);
    }

    salida.close();

    // Leer libro desde fichero
    Libro libro3("", 0);

    std::ifstream entrada("libro.txt");

    if (entrada) {
        libro3.leer_fichero(entrada);
    }

    entrada.close();

    std::cout << "\nLibro leído desde fichero:\n";
    std::cout << libro3 << '\n';

    return 0;
}
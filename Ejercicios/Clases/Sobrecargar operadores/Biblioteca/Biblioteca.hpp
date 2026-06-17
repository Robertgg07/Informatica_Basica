#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include <vector>
#include <fstream>
#include <iostream>
#include "Libro.hpp"

class Biblioteca {
    public:
    //Constructor
    Biblioteca();
    Biblioteca(std::vector<Libro> libro);

    //Getters

    std::vector<Libro> get_libro() const;

    //Setters

    void set_libro(std::vector<Libro> libro);

    //Métodos

    void añadir_libro(const Libro& libro);
    void mostrar_todos_libros() const;
    bool buscar_libro(const std::string& titulo) const;
    double precio_total() const;

    private:
    std::vector<Libro> libro_;

};
#endif
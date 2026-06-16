#ifndef LIBRO_HPP
#define LIBRO_HPP
#include <string>
#include <iostream>
class Libro{
    public:

    //Constructor
    Libro(std::string titulo, double precio);

    //Getters

    std::string GetTitulo() const;
    double GetPrecio() const;

    //setters

    void SetTitulo(std::string titulo);
    void SetPrecio(double precio);

    //Métodos:

    void Mostrar() const;

    private:
    
    std::string titulo_;
    double precio_;
};
    //Sobrecarga Operadores

    std::ostream& operator<<(std::ostream& os, const Libro& libro);

#endif
#include "Biblioteca.hpp"
#include "Libro.hpp"

//Constructor
Libro::Libro(std::string titulo, double precio):
    titulo_{titulo}, precio_{precio} {}

//Getters

std::string Libro::get_titulo() const{
    return titulo_;
}

double Libro::get_precio() const{
    return precio_;
}

//Setters

void Libro::set_titulo(std::string titulo){
    titulo_ = titulo;
}

void Libro::set_precio(double precio){
    precio_ = precio;
}

//Métodos

//Operadores

std::ostream& operator<<(std::ostream& os, const Libro& libro){
    os << libro.get_titulo() << libro.get_precio();
    return os;
}

std::istream& operator>>(std::istream& is, Libro& libro){
    std::string titulo;
    double precio;

    is >> titulo >> precio;

    libro.set_titulo(titulo);
    libro.set_precio(precio);
    return is;
}

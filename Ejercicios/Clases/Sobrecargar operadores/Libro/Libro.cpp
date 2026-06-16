#include <iostream>
#include <string>
#include "Libro.hpp"

//Constructor
Libro::Libro(std::string titulo, double precio):
    titulo_{titulo}, precio_{precio} {}

//Getters

std::string Libro::GetTitulo() const{
    return titulo_;
}

double Libro::GetPrecio() const{
    return precio_;
}

//Setters

void Libro::SetTitulo(std::string titulo){
    titulo_ = titulo;
}

void Libro::SetPrecio(double precio){
    precio_ = precio;
}

//Operador

std::ostream& operator<<(std::ostream& os, const Libro& libro){
    os << libro.GetTitulo() << " - " << libro.GetPrecio() << "€";
        return os;
}
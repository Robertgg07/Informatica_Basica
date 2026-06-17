#include "Biblioteca.hpp"
#include "Libro.hpp"
#include <fstream>

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



void Libro::guardar_fichero(std::ofstream& fichero) const{
    fichero << titulo_ << std::endl;
    fichero << precio_ << std::endl;
}

void Libro::leer_fichero(std::ifstream& fichero) {
    std::getline(fichero >> std::ws, titulo_);
    fichero >> precio_;
}

//Operadores

std::ostream& operator<<(std::ostream& os, const Libro& libro){
    os << libro.get_titulo() << " - " << libro.get_precio();
    return os;
}

std::istream& operator>>(std::istream& is, Libro& libro){
    std::string titulo;
    double precio;

     std::getline(is >> std::ws, titulo);
     is >> precio;

    libro.set_titulo(titulo);
    libro.set_precio(precio);
    return is;
}

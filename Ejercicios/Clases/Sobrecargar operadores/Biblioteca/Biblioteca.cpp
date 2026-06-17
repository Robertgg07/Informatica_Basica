#include "Biblioteca.hpp"
#include "Libro.hpp"

//Constructores

Biblioteca::Biblioteca(const std::vector<Libro> libro):
    libro_{libro} {}
Biblioteca::Biblioteca() {}

//Getters

std::vector<Libro> Biblioteca::get_libro() const {
    return libro_;
}

//Setters

void Biblioteca::set_libro(const std::vector<Libro> libro){
    libro_ = libro;
}

//Métodos

void Biblioteca::añadir_libro(const Libro& libro){
    libro_.push_back(libro);
}

void Biblioteca::mostrar_todos_libros() const{
    for(int i{0}; i < libro_.size();i++){
        std::cout << libro_[i] << std::endl;
    }
}

bool Biblioteca::buscar_libro(const std::string& titulo) const {
    for (int i = 0; i < libro_.size(); i++) {
        if (libro_[i].get_titulo() == titulo) {
            return true;
        }
    }
    return false;
}

double Biblioteca::precio_total() const{
    double precio{0};
    for(int i{0}; i < libro_.size(); i++){
        precio += libro_[i].get_precio();
    }
    return precio;
}
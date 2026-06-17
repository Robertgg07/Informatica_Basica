#include "Biblioteca.hpp"
#include "Libro.hpp"

//Constructores

Biblioteca::Biblioteca(const std::vector<Libro> libro):
    libro_{libro} {}


//Getters

std::vector<Libro> Biblioteca::get_libro() const {
    return libro_;
}

//Setters

void Biblioteca::set_libro(const std::vector<Libro> libro){
    libro_ = libro;
}

//Métodos

void Biblioteca::añadir_libro() const{

}

void Biblioteca::mostrar_todos_libros() const{
    for(int i{0}; i < libro_.size();i++){
        std::cout << libro_[i] << std::endl;
    }
}

bool Biblioteca::buscar_libro() const{
    std::string titulo_;
    for(int i{0}; i < libro_.size(); i++){
        if( libro_[i] == titulo_){
            return true;
        } else {
            return false;
        }
    }
}

double Biblioteca::precio_total() const{
    double precio{0};
    for(int i{0}; i < libro_.size(); i++){
        precio += libro_[i];
    }
}
#include "rectangulo.hpp"
#include <iostream>

//constructor
Rectangulo::Rectangulo(double base, double altura):
    base_{base}, altura_{altura} {}

//getters

double Rectangulo::GetAltura() const {
    return altura_;
}

double Rectangulo::GetBase() const{
    return base_;
}

//setters

void Rectangulo::SetAltura(double altura) {
    altura_ = altura;
}

void Rectangulo::SetBase(double base) {
    base_= base;
}

//Métodos

double Rectangulo::Area(){
    return base_ * altura_;
}

double Rectangulo::Perimetro() {
    return 2 * (base_ * altura_);
}

void Rectangulo::Mostrar(){
    std::cout << "Base: " << base_ << std::endl;
    std::cout << "Altura: " << altura_ << std::endl;
    std::cout << "Area: " << Area() << std::endl;
    std::cout << "Perímetro: " << Perimetro() << std::endl;
}
#include "Fraccion.hpp"
#include <iostream>

//Constructor
Fraccion::Fraccion(double numerador, double denominador):
    numerador_{numerador}, denominador_{denominador} {}

//Getters

double Fraccion::get_numerador() const{
    return numerador_;
}

double Fraccion::get_denominador() const{
    return denominador_;
}

//Setters

void Fraccion::set_numerador(double numerador){
    numerador_ = numerador;
}

void Fraccion::set_denominador(double denominador){
    denominador_ = denominador;
}

//Operador +

Fraccion Fraccion::operator+(const Fraccion& otro) const {

    if (denominador_ == otro.denominador_) {
        return Fraccion( numerador_ + otro.numerador_, denominador_);
    } else {
        return Fraccion( numerador_ * otro.denominador_ + otro.numerador_ * denominador_, denominador_ * otro.denominador_);
    }
}

//Operador -

Fraccion Fraccion::operator-(const Fraccion& otro) const {

    if (denominador_ == otro.denominador_) {
        return Fraccion( numerador_ - otro.numerador_, denominador_
        );
    } else {
        return Fraccion(numerador_ * otro.denominador_ - otro.numerador_ * denominador_, denominador_ * otro.denominador_);
    }
}

//Operador *

Fraccion Fraccion::operator*(const Fraccion& otro) const {
    return Fraccion(numerador_ * otro.numerador_, denominador_ * otro.denominador_);
}

//Operador /

Fraccion Fraccion::operator/(const Fraccion& otro) const{
    return Fraccion(numerador_ * otro.denominador_, otro.numerador_ * denominador_);
}

//Operador ==

bool Fraccion::operator==(const Fraccion& otro) const{
    return numerador_ * otro.denominador_ == otro.numerador_ * denominador_;
}

//Operador !=

bool Fraccion::operator!=(const Fraccion& otro) const {
    return numerador_ * otro.denominador_ != otro.numerador_ * denominador_;
}
//Operador <<

std::ostream& operator<<(std::ostream& os, const Fraccion& fraccion){
    os << fraccion.get_numerador() << "/" << fraccion.get_denominador();
    return os;
}

//Operador >>

std::istream& operator>>(std::istream& is, Fraccion& fraccion){
    double numerador;
    double denominador;

    is >> numerador >> denominador;

    fraccion.set_numerador(numerador);
    fraccion.set_denominador(denominador);

    return is;
}
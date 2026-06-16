#include "Complejo.hpp"
#include <iostream>

//Constructor
Complejo::Complejo(double real, double imag):
    real_{real}, imag_{imag} {}

//Getters

double Complejo::GetReal() const{
    return real_;
}

double Complejo::GetImag() const{
    return imag_;
}

//Setters

void Complejo::SetReal(double real) {
    real_ = real;
}

void Complejo::SetImag(double imag) {
    imag_ = imag;
}

//Operador Suma

Complejo Complejo::operator+(const Complejo& otro) const {
    return Complejo(real_ + otro.real_, imag_ + otro.imag_);
}

//Operador Resta

Complejo Complejo::operator-(const Complejo& otro) const {
    return Complejo(real_ - otro.real_, imag_ - otro.imag_);
}

//SobreCarga Operadores

std::ostream& operator<<(std::ostream& os, const Complejo& complejo) {
    os << "(" << complejo.GetReal() << ", " << complejo.GetImag() << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Complejo& complejo){
    double real;
    double imag;

    is >> real >> imag;

    complejo.SetReal(real);
    complejo.SetImag(imag);
    return is;
}
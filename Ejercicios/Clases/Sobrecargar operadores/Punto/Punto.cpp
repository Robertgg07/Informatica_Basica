#include <iostream>
#include "Punto.hpp"

//Constructor
Punto::Punto(double x, double y): 
    x_{x}, y_{y} {}

//Getters

double Punto::GetX() const{
    return x_;
}

double Punto::GetY() const{
    return y_;
}

//Setters

void Punto::SetX(double x){
    x_ = x;
}

void Punto::SetY(double y){
    y_ = y;
}

//Sobrecarga Operadores:

std::ostream& operator<<(std::ostream& os, const Punto& punto){
    os << "(" << punto.GetX() << "," << punto.GetY() << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Punto& punto){
    double x;
    double y;

    is >> x >> y;

    punto.SetX(x);
    punto.SetY(y);

    return is;
}
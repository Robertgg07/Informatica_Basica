#ifndef PUNTO_HPP
#define PUNTO_HPP
#include <iostream>

class Punto {
    public:
    
    //Constructor
    Punto(double x, double y);

    //Getters

    double GetX() const;
    double GetY() const;

    //Setters

    void SetX(double x);
    void SetY(double y);

    private:

    double x_;
    double y_;
};

    //Sobrecargas Operadores

    std::ostream& operator<<(std::ostream& os, const Punto& punto);
    std::istream& operator>>(std::istream& is, Punto& punto);

#endif
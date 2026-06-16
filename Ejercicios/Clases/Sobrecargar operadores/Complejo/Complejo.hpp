#ifndef COMPLEJO_HPP
#define COMPLEJO_HPP
#include <iostream>

class Complejo {
    public:

    //constructor
    Complejo(double real, double imag);

    //Getters

    double GetReal() const;
    double GetImag() const;

    //setters

    void SetReal(double real);
    void SetImag(double imag);

    Complejo operator+(const Complejo& otro) const;
    Complejo operator-(const Complejo& otro) const;
    private:
    double real_;
    double imag_;
};

std::ostream& operator<<(std::ostream& os,const Complejo& complejo);
std::istream& operator>>(std::istream& is, Complejo& complejo);

#endif
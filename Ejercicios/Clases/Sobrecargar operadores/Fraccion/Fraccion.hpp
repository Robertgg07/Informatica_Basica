#ifndef FRACCION_HPP
#define FRACCION_HPP
#include <iostream>

class Fraccion{
    public:
    //Constructor
    Fraccion(double numerador, double denominador);

    //Getters

    double get_numerador() const;
    double get_denominador() const;

    //Setters

    void set_numerador(double numerador);
    void set_denominador(double denominador);

    //Operadores +,-,*,/,==,!=
    Fraccion operator+(const Fraccion& otro) const;
    Fraccion operator-(const Fraccion& otro) const;
    Fraccion operator*(const Fraccion& otro) const;
    Fraccion operator/(const Fraccion& otro) const;
    bool operator==(const Fraccion& otro) const;
    bool operator!=(const Fraccion& otro) const;

    // Ficheros
    void GuardarEnFichero(std::ofstream& fichero) const;
    void LeerDeFichero(std::ifstream& fichero);

    private:
    double numerador_;
    double denominador_;

};

//Operadores Flujo

std::ostream& operator<<(std::ostream& os,const Fraccion& fraccion);
std::istream& operator>>(std::istream& is, Fraccion& fraccion);

#endif
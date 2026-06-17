#ifndef LIBRO_HPP
#define LIBRO_HPP
#include <string>
#include <iostream>
#include <fstream>

class Libro{
    public:

    //Constructor
    Libro(); //Por defecto
    Libro(std::string titulo,double precio);

    //Getters

    std::string get_titulo() const;
    double get_precio() const;

    //Setters

    void set_titulo(std::string titulo);
    void set_precio(double precio);

    //Métodos
    void guardar_fichero(std::ofstream& fichero) const ;
    void leer_fichero(std::ifstream& fichero);

    private:
    std::string titulo_;
    double precio_;

};

    std::ostream& operator<<(std::ostream& os, const Libro& libro);
    std::istream& operator>>(std::istream& is, Libro& libro);

#endif
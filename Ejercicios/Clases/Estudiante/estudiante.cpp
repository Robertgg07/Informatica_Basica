#include "estudiante.hpp"
#include <string>
#include <iostream>

//Constructor
Estudiante::Estudiante(std::string nombre, int edad, double nota_media):
    nombre_{nombre}, edad_{edad}, nota_media_{nota_media} {}

//Getters

std::string Estudiante::GetNombre() const {
    return nombre_;
}

int Estudiante::GetEdad() const {
    return edad_;
}

double Estudiante::GetNotaMedia() const {
    return nota_media_;
}

//Setters

void Estudiante::SetNombre(std::string nombre) {
    nombre_ = nombre;
}

void Estudiante::SetEdad(int edad){
    edad_ = edad;
}

void Estudiante::SetNotaMedia(double nota_media){
    nota_media_ = nota_media;
}

//Métodos

void Estudiante::Mostrar() const {
    std::cout << nombre_ << " " << edad_ << " " << nota_media_ << std::endl;
}

bool Estudiante::Aprobado() const {
    if(nota_media_ >= 5){
        return true;
    } else{
        return false; 
    }
}

bool Estudiante::Honor() const {
    if(nota_media_ >= 9){
        return true;
    } else {
        return false;
    }
}
#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

class Estudiante {
private:
    std::string nombre_;
    int edad_;
    double nota_media_;

public:
    // Constructor
    Estudiante(std::string nombre, int edad, double nota_media);

    // Getters
    std::string GetNombre() const;
    int GetEdad() const;
    double GetNotaMedia() const;

    // Setters
    void SetNombre(std::string nombre);
    void SetEdad(int edad);
    void SetNotaMedia(double nota_media);

    // Métodos
    void Mostrar() const;
    bool Aprobado() const;
    bool Honor() const;
};

#endif
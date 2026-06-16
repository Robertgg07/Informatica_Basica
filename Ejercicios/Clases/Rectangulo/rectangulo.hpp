#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

class Rectangulo{
    private:
    double base_;
    double altura_;

    public:
    //Constructor
    Rectangulo(double base, double altura);

    //getters
    double GetBase() const;
    double GetAltura() const;

    //setters
    void SetBase(double base);
    void SetAltura(double altura);

    //Métodos

    double Area();
    double Perimetro();
    void Mostrar();
};
#endif
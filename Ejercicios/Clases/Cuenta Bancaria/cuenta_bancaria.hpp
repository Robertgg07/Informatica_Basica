#ifndef CUENTA_BANCARIA_HPP
#define CUENTA_BANCARIA_HPP

#include <string>

class Cuenta_Bancaria {
private:
    std::string titular_;
    int num_cuenta_;
    double saldo_;

public:
    // Constructor
    Cuenta_Bancaria(std::string titular, int num_cuenta, double saldo);

    // Getters
    std::string GetTitular() const;
    int GetNumCuenta() const;
    double GetSaldo() const;

    // Setters
    void SetTitular(std::string titular);
    void SetNumCuenta(int num_cuenta);
    void SetSaldo(double saldo);

    // Métodos
    void IngresarDinero(double cantidad);
    void RetirarDinero(double cantidad);
    void Mostrar() const;
};

#endif
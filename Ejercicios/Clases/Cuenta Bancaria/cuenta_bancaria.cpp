#include "cuenta_bancaria.hpp"
#include <iostream>
#include <string>

//Constructor

Cuenta_Bancaria::Cuenta_Bancaria(std::string titular, int num_cuenta, double saldo) :
    titular_{titular}, num_cuenta_{num_cuenta}, saldo_{saldo} {}

//Getters

std::string Cuenta_Bancaria::GetTitular() const{
    return titular_;
}
    
int Cuenta_Bancaria::GetNumCuenta() const {
    return num_cuenta_;
}

double Cuenta_Bancaria::GetSaldo() const {
    return saldo_;
}

//Setters

void Cuenta_Bancaria::SetTitular(std::string titular)  {
    titular_ = titular;
}

void Cuenta_Bancaria::SetNumCuenta(int num_cuenta) {
    num_cuenta_ = num_cuenta;
}

void Cuenta_Bancaria::SetSaldo(double saldo){
    saldo_ = saldo;
}

//Métodos

void Cuenta_Bancaria::IngresarDinero(double cantidad) {
    saldo_ += cantidad;
}

void Cuenta_Bancaria::RetirarDinero(double cantidad) {
    if(cantidad <= saldo_){
        saldo_ -= cantidad;
    } else {
        std::cout << "Saldo insuficiente" << std::endl;
    }
}

void Cuenta_Bancaria::Mostrar() const {
    std::cout << "Titular: " << titular_ << '\n' << "Cuenta: " << num_cuenta_ << '\n' << "Saldo: " << saldo_ << " €\n";
}
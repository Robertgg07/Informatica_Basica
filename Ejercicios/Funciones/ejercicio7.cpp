#include <iostream>
#include <cmath>

int Factorial(int n){
if( n == 0) return 1;
else return n * Factorial(n - 1);
}

int FactorialReciproco(int n){
    return 1/Factorial(n);
}

int Signo(int n){
    if( n % 2 == 0) return 1;
    else return -1;
}

double SenoAprox(double x, int m) {
    double suma = 0.0;

    for (int k = 0; k < m; k++) {
        suma += Signo(k) * pow(x, 2 * k + 1) * FactorialReciproco(2 * k + 1);
    }

    return suma;
}

double CosenoAprox(double x, int m) {
    double suma = 0.0;

    for (int k = 0; k < m; k++) {
        suma += Signo(k) * pow(x, 2 * k) * FactorialReciproco(2 * k);
    }

    return suma;
}

int main() {
    double x;
    int m;

    std::cout << "Punto de evaluacion: ";
    std::cin >> x;

    std::cout << "Numero de terminos: ";
    std::cin >> m;

    double errorSeno = fabs(sin(x) - SenoAprox(x, m));
    double errorCoseno = fabs(cos(x) - CosenoAprox(x, m));

    std::cout << "Error seno: " << errorSeno << std::endl;
    std::cout << "Error coseno: " << errorCoseno << std::endl;

    return 0;
}
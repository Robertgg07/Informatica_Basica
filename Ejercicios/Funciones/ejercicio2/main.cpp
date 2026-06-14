#include <iostream>
#include "MCD.hpp"

int main(int argc, char *argv[]){
    if( argc != 3)
    std::cout << "Uso: a, b" << std::endl;

int a = atoi(argv[1]);
int b = atoi(argv[2]);

std::cin >> a >> b;

if (a < b) { // Cumple la condición A >= B del algoritmo.
  int aux = a;
  a = b;
  b = aux;
}

std::cout << MaximoComunDivisor(a,b) << std::endl;

}
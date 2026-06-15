#include "separar.hpp"
#include <iostream>

int main(int argc, char *argv[]){

    if(argc != 4){
        std::cout << "Uso: Numeros.txt pares.txt impares.txt" << std::endl;
    }
    
    SepararNumeros(argv[0], argv[1], argv[2]);

    return 0;
}
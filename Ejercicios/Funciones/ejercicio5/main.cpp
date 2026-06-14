#include "find.hpp"
#include <iostream>
#include <string>


int main(int argc, char *argv[]){
    if( argc != 3){
        std::cout << "Uso: cadena, carácter" << std::endl;
    }
std::string cadena = argv[1];
char r = atoi(argv[2]);

std::cin >> cadena >> r;

std::cout << find_first_of(cadena,r) << std::endl;

    return 0;
}
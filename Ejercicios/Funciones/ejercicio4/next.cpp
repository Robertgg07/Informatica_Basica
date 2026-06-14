#include "next.hpp"
#include <string>

std::string next_letter(std::string cadena){
    for(int i{0}; i < cadena.size(); i++){
        cadena[i] = cadena[i] + 1;
    }
    return cadena;
}

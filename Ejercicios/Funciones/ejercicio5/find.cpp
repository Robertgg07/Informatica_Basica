#include <string>
#include "find.hpp"

int find_first_of(std::string cadena, char c){
    for(int i{0}; i < cadena.size(); i++){
        if( cadena[i] == c){
            return i;
        }
    }
    return -1;
}
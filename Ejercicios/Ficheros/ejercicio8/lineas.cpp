#include "lineas.hpp"
#include <fstream>
#include <string>

void lineas(const std::string& entrada, const std::string& salida){
    std::ifstream fichero_entrada(entrada);
    std::ofstream fichero_salida(salida);

    std::string linea;
    int numero_linea{1};

    while(getline(fichero_entrada, linea)){
        fichero_salida << linea << " " << linea << std::endl;
        numero_linea++;
    }


}
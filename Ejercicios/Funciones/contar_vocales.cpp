#include <iostream>

int CountVowels(std::string cadena){
int contador{0};

for(int i{0}; i < cadena.length(); i++){
switch (cadena[i]) {
    case 'a' : contador++;
    case 'e' : contador++;
    case 'i' : contador++;
    case 'o' : contador++;
    case 'u' : contador++;
break;
}
    return contador;
}

}
int main(){

    std::string cadena;
    std::cin >> cadena;

    std::cout << "Esta cadena tiene: " << CountVowels(cadena) << "vocales. " << std::endl;
}
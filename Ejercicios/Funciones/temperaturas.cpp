#include <iostream>
#include <iomanip>
#include <cstdlib>

double FarenheitToCelsius(double f){
return (f - 32) / 1.8;

}
double FahrenheitToKelvin(double f){

    return FarenheitToCelsius(f) + 273.15;
}

int main(int argc, char* argv[]) {

    if (argc != 4) {
        std::cout << "Uso: ./temperatures min max paso\n";
        return 1;
    }

    int minimo = atoi(argv[1]);
    int maximo = atoi(argv[2]);
    int paso = atoi(argv[3]);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Fahrenheit   Celsius    Kelvin\n";

    for (int f = minimo; f <= maximo; f += paso) { 
        std::cout << std::setw(10) << f << std::setw(10) << FarenheitToCelsius(f) << std::setw(10) << FahrenheitToKelvin(f)<< '\n';
    }

    return 0;
}
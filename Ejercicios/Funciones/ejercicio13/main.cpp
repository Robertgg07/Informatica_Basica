#include <iostream>
#include "binomial.h"

int main() {
    int n, k;

    std::cout << "Introduzca n: ";
    std::cin >> n;

    std::cout << "Introduzca k: ";
    std::cin >> k;

    std::cout << "C(" << n << "," << k << ") = " << CoeficienteBinomial(n, k) << std::endl;

    return 0;
}
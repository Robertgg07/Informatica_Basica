#include "binomial.h"

long long Factorial(int n) {
    long long fact = 1;

    for (int i = 2; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

long long CoeficienteBinomial(int n, int k) {
    return Factorial(n) /
(Factorial(k) * Factorial(n - k));
}
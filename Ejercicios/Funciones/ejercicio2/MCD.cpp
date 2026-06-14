#include "MCD.hpp"

int MaximoComunDivisor(int a, int b) {
  int resto;
  while (a % b != 0) {
    resto = a % b;
    a = b;
    b = resto;
  }
  return b;
}
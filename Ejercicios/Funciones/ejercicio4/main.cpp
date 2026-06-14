#include <string>
#include "next.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    return 1;
  }

  std::string cadena = argv[1];

  std::cout << next_letter(cadena) << std::endl;

  return 0;
}
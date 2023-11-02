/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P61061_Product-of-digits.cc
  * @author Cristofer Marichal González - alu0101646480@ull.edu.es
  * @date Nov 2 2023
  * @brief El programa lee un numero natural e imprime como salida la suma de
  *        los digitos.
  * @bug There are no known bugs
  */ 

#include <iostream>

int main() {
  int producto{0};
  int numero{0};
  while (std::cin >> numero) {
    producto *= numero % 10;
    numero /= 10;
    if (producto >= 10) {
      std::cout << "The product of the digits of " << numero << " is "
              << producto << ".";
    } else {
      std::cout << "----------" << std::endl;
    }
  }
  return 0;
}

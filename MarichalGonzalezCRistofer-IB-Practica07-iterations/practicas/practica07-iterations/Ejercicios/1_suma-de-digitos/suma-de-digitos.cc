/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file suma-de-digitos.cc
  * @author Cristofer Marichal González - alu0101646480@ull.edu.es
  * @date Oct 29 2023
  * @brief El programa lee un numero natural e imprime como salida la suma de
  *        los digitos.
  * @bug There are no known bugs
  * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md4
  */ 

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Este programa tiene como objetivo calcular la suma de los dígitos ";
  std::cout << "de un número natural dado. Un número natural es aquel que es mayor ";
  std::cout << "o igual a cero y no tiene decimales ni partes fraccionarias. Para "; 
  std::cout << "lograrlo, el programa solicitará al usuario que ingrese un numero, ";
  std::cout << "realizará la suma de sus dígitos y mostrará el resultado en pantalla." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con un numero erroneo de parametros." << std::endl << std::endl;
    std::cout << "Este programa deberia llamarse: " << argv[0] << " param1 " << std::endl;
    std::cout << "param1: " << " Un numero entero natural." << std::endl;
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  int suma{0};
  int numero = std::atoi(argv[1]);
  int original_numero = numero;
  while (numero > 0) {
    suma += numero % 10;
    numero /= 10;
  }
  std::cout << "La suma de los digitos de " << original_numero << " es: " << suma << "." << std::endl;
  return 0;
}

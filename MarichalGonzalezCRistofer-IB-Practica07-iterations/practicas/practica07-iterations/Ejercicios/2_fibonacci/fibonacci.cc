/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file fibonacci.cc
  * @author Cristofer Marichal González - alu0101646480@ull.edu.es
  * @date Oct 29 2023
  * @brief The programa devuelve los n primeros numeros de la serie de
  *        fibonacci.
  * 
  * @bug There are no known bugs
  * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
  */ 

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Este programa imprime los N primeros terminos de la serie de ";
  std::cout << "fibonacci." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con un numero erroneo de parametros" << std::endl << std::endl;
    std::cout << "Este programa deberia llamarse: " << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " Un numero entero." << std::endl;
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  
  int serie;
  int termino_1 = 0;
  int termino_2 = 1;
  int cantidad = std::atoi(argv[1]);
  
  std::cout << termino_1;
    
  for (int i = 2; i<= cantidad; i++) {
    serie = termino_2;
    std::cout << ", " << termino_2;
    termino_2 = termino_1 + termino_2;
    termino_1 = serie;     
  }
  std::cout << std::endl;
  
  return 0;
}

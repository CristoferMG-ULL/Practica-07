/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P12943_Control-C202C.cc
  * @author Cristofer Marichal González - alu0101646480@ull.edu.es
  * @date 2 Nov 2023
  * @brief El programa detecta dado un numero de respuestas la opcion
  *        mayoritaria.
  * 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P12943
  */ 

#include <iostream>

int main() {
  int preguntas{0}, respuesta_a{0}, respuesta_b{0}, respuesta_c{0};
  char respuesta;
  std::cin >> preguntas;
  for (int i = 1; i <= preguntas; i++) {
    std::cin >> respuesta;
    if (respuesta == 'a') {
      respuesta_a += 1;
    } else if (respuesta == 'b') {
      respuesta_b += 1;
    } else if (respuesta == 'c') {
      respuesta_c += 1;
    }
  }
  if ((respuesta_a > respuesta_b && respuesta_a > respuesta_c) || respuesta_a ==
respuesta_b) {
    std::cout << "majoria de a" << std::endl;
    std::cout << respuesta_a << " repeticio(ns)" << std::endl;
  } else if ((respuesta_b > respuesta_a && respuesta_b > respuesta_c) ||
respuesta_b == respuesta_c) {
    std::cout << "majoria de b" << std::endl;
    std::cout << respuesta_b << " repeticio(ns)" << std::endl;
  }  else if (respuesta_c > respuesta_a && respuesta_c > respuesta_b) {
    std::cout << "majoria de c" << std::endl;
    std::cout << respuesta_c << " repeticio(ns)" << std::endl;
  } 
  return 0;
}

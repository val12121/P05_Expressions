/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file letras.cc
  * @author Camila Valentina Alonso Yepez
  * @date 18 OCT 2023
  * @brief Pasa de letras mayusculas a minusculas y viceversa
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
int main() {

  char letra;

  std::cout << "Introduzca una letra: ";
  std::cin >> letra;

  if (letra > 96) {
    std::cout << static_cast<char>(letra - 32) << std::endl;
  } else {
    std::cout << static_cast<char>(letra + 32) << std::endl;
  }

  return 0;

}

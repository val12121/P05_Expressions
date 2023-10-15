
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file desinflado.cc
  * @author Camila Valentina Alonso Yepez
  * @date 15 Oct 2023
  * @brief This program convert uppercase to lowercase and the opposite
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {

  char letra;
  
  std::cin >> letra;
  
  if (letra <= 90) {
     std::cout << static_cast<char>(letra + 32) << std::endl; 
  }

  else {
    std::cout << static_cast<char>(letra - 32) << std::endl;
  }

}

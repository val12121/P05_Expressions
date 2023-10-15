
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file boolean_operators.cc
  * @author Camila Valentina Alonso Yepez
  * @date 15 Oct 2023
  * @brief This program does boolean operations (and, or, not)
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main () {

  bool operador1 = false;
  bool operador2 = false;

  std::cout << "| A | B | AND | OR | NOT A | NOT B |\n"; 
  std::cout << "------------------------------------\n";
  
  for (int i = 0; i <= 1; i++) {
    operador1 = i; 
 
    for (int j = 0; j <= 1; j++) {
     
      operador2 = j;
      std::cout << "| " << operador1 << " | ";
      std::cout << operador2 << " |  ";
      std::cout << static_cast<int>(operador1 && operador2) << "  | ";
  
      std::cout << static_cast<int>(operador1 || operador2) << "  |   ";
      std::cout << !operador1 << "   |   ";
      std::cout << !operador2 << "   | ";

      std::cout << std::endl;
    }
  }

  return 0;
}

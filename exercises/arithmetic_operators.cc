
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file arithmetic_operators.cc 
  * @author Camila Valentina Alonso Yepez
  * @date 15 Oct 2023
  * @brief This program reads two numbers and does arithmetic and comparison operations
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
int main() {

  int numero1{0};
  int numero2{0};

  std::cin >> numero1;
  std::cin >> numero2;

  std::cout << numero1 << " + " << numero2 << " = " << numero1 + numero2;
  std::cout << std::endl;
 
  std::cout << numero1 << " - " << numero2 << " = " << numero1 - numero2;
  std::cout << std::endl;
 
  std::cout << numero1 << " * " << numero2 << " = " << numero1 * numero2;
  std::cout << std::endl;
 
  std::cout << numero1 << " / " << numero2 << " = " << numero1 / numero2;
  std::cout << std::endl;
 
  std::cout << numero1 << " % " << numero2 << " = " << numero1 % numero2;
  std::cout << std::endl;

  std::cout << numero1 << " es igual, mayor o menor que " << numero2 << " = ";

  if (numero1 > numero2) {
    std::cout << numero1 << " > " << numero2 << std::endl;
  }

  if (numero1 < numero2) {
    std::cout << numero1 << " < " << numero2 << std::endl;
  }
  
  if (numero1 == numero2) {
    std::cout << numero1 << " = " << numero2 << std::endl;
  }

  return 0;

}

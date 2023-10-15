/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P48107_integer_division_and_remainder_of_two_natural_numbers.cc  
  * @author Camila Valentina Alonso Yepez
  * @date 15 Oct 2023
  * @brief This program reads two natural numbers a and b, 
  *        with b > 0, and prints the integer division d and the remainder r 
  *        of a divided by b. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>
int main() {

  int numero1 {0};
  int numero2 {0};

  std::cin >> numero1 >> numero2;
  std::cout << numero1 / numero2 << " " << numero1 % numero2 << std::endl;

  return 0; 

}

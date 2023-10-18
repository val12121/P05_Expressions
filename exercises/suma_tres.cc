/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file suma_tres.cc
  * @author Camila Valentina Alonso Yepez
  * @date 18 OCT 2023
  * @brief Suma tres numeros introducidos por teclado y muestra
  * muestra el resultado por pantalla
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {

  int num1{0};
  int num2{0};
  int num3{0};

  std::cout << "Introduce tres números: ";
  std::cin >> num1 >> num2 >> num3;
  std::cout << "Sumatoria: " << num1 + num2 + num3 << std::endl; 

  return 0;
}

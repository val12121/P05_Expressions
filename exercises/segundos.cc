/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file segundos.cc
  * @author Camila Valentina Alonso Yepez
  * @date 18 OCT 2023
  * @brief Suma años, dias, horas, minutos y segundos, pasando todos a segundos
  * primero y luego sumando
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
int main() {

  int year{0};
  int days{0};
  int hours{0};
  int minutes{0};
  int seconds{0};
  int resultado;

  std::cin >> year >> days >> hours >> minutes >> seconds;
  resultado = year*365*24*60*60 + days*24*60*60 + hours*60*60 + minutes*60 + seconds;
  std::cout << "Resultado: " << resultado << std::endl;

  return 0;
}

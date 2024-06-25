/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @brief Class methods for basketball player, including but not limited to, position, name and surname, height and weight.
  * @date Jun 10 2024
  * @bug There are no known bugs
  */

#include "jugador.h"
#include <fstream>
 
std::string Jugador::get_position() const {
  return position_;
}

std::string Jugador::get_apellido() const {
  return apellido_;
}

std::string Jugador::get_nombre() const {
  return nombre_;
}

double Jugador::get_height() const {
  return height_;
}

double Jugador::get_weight() const {
  return weight_;
}

int Jugador::get_edad() const {
  return edad_;
}

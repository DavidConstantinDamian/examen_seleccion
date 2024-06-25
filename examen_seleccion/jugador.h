/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @brief Class for basketball player, including but not limited to, position, name and surname, height and weight.
  * @date Jun 10 2024
  * @bug There are no known bugs
  */

#include "persona.h"

class Jugador {
  public:
    Jugador(Persona miPersona, std::string position, double height, double weight) : miPersona_(miPersona), position_(position), height_(height), weight_(weight) {}
   
    //getters
    std::string get_position() const;
    std::string get_apellido() const;
    std::string get_nombre() const;
    double get_height() const;
    double get_weight() const;
    int get_edad() const;
 private:
    Persona miPersona_;
    double height_;
    double weight_;
    std::string position_;
    std::string apellido_ = miPersona_.apellido_;
    std::string nombre_ = miPersona_.nombre_;
    int edad_ = miPersona_.edad_;
};

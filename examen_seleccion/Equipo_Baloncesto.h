#include "asistente.h"
#include <vector>

class Equipo_Baloncesto {
  public:
  //constructor
  Equipo_Baloncesto(std::string nombre, std::string ciudad, std::vector<Jugador> jugadores, Entrenador miEntrenador, std::vector<Asistente> vector_asistentes) : nombre_(nombre), ciudad_(ciudad), jugadores_(jugadores), miEntrenador_(miEntrenador), vector_asistentes_(vector_asistentes) {}
  //methods
  double avg_height() const;
  double avg_weight() const;
  double avg_age() const;
  private:
    std::string nombre_;
    std::string ciudad_;
    std::vector<Jugador> jugadores_;
    Entrenador miEntrenador_;
    std::vector<Asistente> vector_asistentes_;
};


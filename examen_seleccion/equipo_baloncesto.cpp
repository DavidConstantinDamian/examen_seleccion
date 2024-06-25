#include "Equipo_Baloncesto.h"

double Equipo_Baloncesto::avg_height() const {
  int sum = 0;
  int j = 0;
  for (int i = 0; i < jugadores_.size(); i++) {
    j++;
    sum += jugadores[i].miPersona_.get_height();
  }
  return sum / j;
}

double Equipo_Baloncesto::avg_weight() const;
  int sum = 0;
  int j = 0;
  for (int i = 0; i < jugadores_.size(); i++) {
    j++;
    sum += jugadores[i].miPersona_.get_weight();
  }
  return sum / j;
}

//double Equipo_Baloncesto::avg_age() const;


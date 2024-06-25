#include "entrenador.h"

Persona Entrenador::get_persona() const {
  return miPersona_;
}

std::string Entrenador::get_licencia() const {
  return licencia_;
}

int Entrenador::get_inicio_de_contrato() const {
  return inicio_de_contrato_;
}

int Entrenador::get_final_de_contrato() const {
  return final_de_contrato_;
}

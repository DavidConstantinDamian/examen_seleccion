#include "jugador.h"

class Entrenador {
  public:
    //constructor
    Entrenador(Persona miPersona, std::string licencia, int inicio_de_contrato, int final_de_contrato) : miPersona_(miPersona_), licencia_(licencia), inicio_de_contrato_(inicio_de_contrato), final_de_contrato_(final_de_contrato) {}
    //getters
    Persona get_persona() const;
    std::string get_licencia() const;
    int get_inicio_de_contrato() const;
    int get_final_de_contrato() const;
  private:
    Persona miPersona_;
    std::string licencia_;
    int inicio_de_contrato_;
    int final_de_contrato_;
    std::string name_ = miPersona_.nombre_;
    std::string surname_ = miPersona_.apellido_;
};

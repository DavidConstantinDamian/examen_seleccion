#include "entrenador.cpp"

class Asistente {
  public:    
    //constructor
    Asistente(Persona miPersona, int inicio_contrato, int final_contrato) : miPersona_(miPersona), inicio_(inicio_contrato), final_(final_contrato) {}
    //getters
    int get_inicio() const;
    int get_final() const;
  private:
    int inicio_;
    int final_;
    Persona miPersona_;
};


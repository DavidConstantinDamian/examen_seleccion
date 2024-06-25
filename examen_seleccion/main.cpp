#include "equipo_baloncesto.cpp"

int main() {  
  while (!std::cin.eof()) {
    std::string position, surname, name;
    std::cin >> position;
    if (position == "Entrenador" || position == "Entrenadores ayudantes" || position == "Asistentes") {
      std::cin >> name;
      std::cin >> surname;
      Persona miPersona(surname, name, 0, "X");
      Entrenador miEntrenador(miPersona, position, 0, 0);  
    }
    else {    
      std::cin >> surname;
      std::cin >> name;
      int height{0}, weight{0}, age{0};
      std::cin >> height >> weight >> age;
      Persona miPersona(surname, name, age, "X");
      Jugador miJugador(miPersona, position, height, weight);
    }
  }
}


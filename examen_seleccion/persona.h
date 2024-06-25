#include <iostream>
#include <string>

class Persona {
  public:
    Persona(std::string apellido, std::string nombre, int edad, std::string DNI) : apellido_(apellido), nombre_(nombre), edad_(edad), DNI_(DNI) {}
    std::string apellido_;
    std::string nombre_;
    int edad_;
    std::string DNI_;
    //getters
    std::string get_nombre() const;
    std::string get_apellido() const;
    int get_edad() const;
    std::string get_DNI() const;
};

std::string Persona::get_nombre() const {
  return nombre_;
}

std::string Persona::get_apellido() const {
  return apellido_;
}

int Persona::get_edad() const {
  return edad_;
}

std::string Persona::get_DNI() const {
  return DNI_;
}


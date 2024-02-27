#include "Animal.h"

Animal::Animal(string nombre, int edad) : nombre(nombre), edad(edad) {}

Animal::~Animal() {
    cout << "Destructor del Animal " << nombre << endl;
}

string Animal::getNombre() const {
    return nombre;
}

void Animal::setNombre(string nombre) {
    this->nombre = nombre;
}

int Animal::getEdad() const {
    return edad;
}

void Animal::setEdad(int edad) {
    this->edad = edad;
}
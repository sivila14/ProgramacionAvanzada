
#include "Gato.h"
#include <iostream>

Gato::Gato(string nombre, int edad) : Animal(nombre, edad) {}

Gato::~Gato() {}

void Gato::hablar() const {
    cout << "Miau" << endl;
}

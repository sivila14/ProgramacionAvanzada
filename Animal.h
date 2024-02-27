#include <iostream>
#include <string>
class Animal {
private:
    string nombre;
    int edad;

public:
    Animal(string nombre, int edad);
    virtual void Animal();
    virtual ~Animal();

    string getNombre() const;
    void setNombre(string nombre);

    int getEdad() const;
    void setEdad(int edad);

    virtual void hablar() const = 0; 
};

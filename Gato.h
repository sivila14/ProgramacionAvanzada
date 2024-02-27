
#include "Animal.h"

class Gato : public Animal {
public:
    Gato(std::string nombre, int edad);
    virtual ~Gato();

    
    virtual void hablar() const override;
};

#endif
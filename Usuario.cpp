#include "Usuario.h"
#include <iostream>

void Usuario::Saludar()
{
    std::cout << _nombre << " les saluda" << std::endl;
}

Usuario::Usuario(std::string nombre) : _nombre(nombre)
{
    std::cout << "Creando al usuario " << _nombre << std::endl;
}

Usuario::~Usuario()
{
    std::cout << "Destruyendo al usuario " << _nombre << std::endl;
}

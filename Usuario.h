#pragma once
#include <string>

class Usuario
{
public:
    Usuario(std::string nombre);
    ~Usuario();
    void Saludar();

private:
    std::string _nombre;
};

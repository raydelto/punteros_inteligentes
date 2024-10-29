#include <iostream>
#include "Usuario.h"
#include <memory>

using namespace std;

Usuario *Procesar()
{
    Usuario usuario("Ray");
    usuario.Saludar();

    Usuario *usuario2 = new Usuario("Branly");
    usuario2->Saludar();

    Usuario *usuario3 = usuario2;
    usuario3->Saludar();

    unique_ptr<Usuario> usuario4 = make_unique<Usuario>("Manuel");
    usuario4->Saludar();

    shared_ptr<Usuario> usuario5 = make_shared<Usuario>("Carlos");
    usuario5->Saludar();
    shared_ptr<Usuario> usuario6 = usuario5;
    usuario6->Saludar();
    return usuario2;
}

int main()
{
    Usuario *miUsuario = nullptr;
    cout << "Antes de procesar" << endl;
    miUsuario = Procesar();
    cout << "Despues de procesar" << endl;
    miUsuario->Saludar();
    delete miUsuario;
    return 0;
}
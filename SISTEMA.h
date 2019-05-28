/*
06/06/2019

Álvarez Santiago Daniela
Rojas Solís Juan Carlos
Sanchez Lemus Ulises Mariano
Servin Zamora Alejandro

PROYECTO

*/
#ifndef _SISTEMA_H
#define _SISTEMA_H
#include <string>
#include <iostream>

using namespace std;

class C_sistema
{
      public:
      	
      public:
        C_sistema();
        virtual void agregar()=0;
        virtual void editar()=0;
        virtual void mostrar()=0;
};

C_sistema::C_sistema()
{
};
  
#endif

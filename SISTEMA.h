/*
06/06/2019

�lvarez Santiago Daniela
Rojas Sol�s Juan Carlos
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
      public://NO HAY ATRIBUTOS
      	
      public://M�TODOS
        C_sistema();
        virtual void agregar()=0;
        virtual void editar()=0;
        virtual void mostrar()=0;
};
//CONSTRUCTOR VAC�O
C_sistema::C_sistema()
{
};
  
#endif

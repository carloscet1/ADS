/*
06/06/2019

Álvarez Santiago Daniela
Rojas Solís Juan Carlos
Servin Zamora Alejandro

PROYECTO

*/
#ifndef _ALMACENISTA_H
#define _ALMACENISTA_H
#include "SISTEMA.h"

using namespace std;

class C_almacenista : public C_sistema
{
      public:
      	int ID_almacenista;
      	string nombre_almacenista;
        
      public:
      	C_almacenista();
		void agregar();
        void editar();
        void mostrar();
		void imprimir_reporte();  
};

C_almacenista::C_almacenista()
{
	ID_almacenista=1;
};

void C_almacenista::agregar()
{
	ID_almacenista;
	
    cout<<"Ingresa el nombre del almacenista"<<endl;
   	getline(cin, nombre_almacenista);
}

void C_almacenista::editar()
{
	cout<<"Ingresa el nuevo nombre del almacenista"<<endl;
   	getline(cin, nombre_almacenista);
}

void C_almacenista::mostrar()
{
	cout<<"-------------------------------"<<endl;
	cout<<"ID: "<<ID_almacenista<<endl;
    cout<<"Nombre: "<<nombre_almacenista<<endl;
    cout<<"-------------------------------"<<endl;
}

void C_almacenista::imprimir_reporte()
{
	cout<<"-------------------------------"<<endl;
	cout<<"REPORTE DEL ALMACENISTA: "<<nombre_almacenista<<endl;
	cout<<"ID: "<<ID_almacenista<<endl;
    cout<<"Nombre: "<<nombre_almacenista<<endl;
    cout<<"-------------------------------"<<endl;
}
#endif

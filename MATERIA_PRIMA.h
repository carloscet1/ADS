/*
06/06/2019

Álvarez Santiago Daniela
Rojas Solís Juan Carlos
Servin Zamora Alejandro

PROYECTO

*/
#ifndef _MATERIA_PRIMA_H
#define _MATERIA_PRIMA_H
#include "SISTEMA.h"

using namespace std;

class C_materia_prima : public C_sistema
{
      public:
      	int ID_materia_prima;
       	string materia_prima;
       	string proveedor;
       	float p_unitario;
       	float total_comprado;
       	float costo_total;
       
      public:
        C_materia_prima();
        void agregar();
        void editar();
        void mostrar();
};

C_materia_prima::C_materia_prima()
{
	ID_materia_prima=1;
	costo_total=0;
};

void C_materia_prima::agregar()
{
	ID_materia_prima;
	
    cout<<"Ingresa el nombre de la materia prima"<<endl;
   	getline(cin, materia_prima);
    
    cout<<"Ingresa el nombre del proveedor"<<endl;
   	getline(cin, proveedor);
    
   	cout<<"Ingrese el precio unitario"<<endl;
   	cin>>p_unitario;
	cin.ignore();
   	
	cout<<"Ingrese la cantidad total comprada"<<endl;
   	cin>>total_comprado;
	cin.ignore();
}

void C_materia_prima::editar()
{
	cout<<"Ingresa el nuevo nombre de la materia prima"<<endl;
   	getline(cin, materia_prima);
    
    cout<<"Ingresa el nuevo nombre del proveedor"<<endl;
   	getline(cin, proveedor);
    
   	cout<<"Ingrese el nuevo precio unitario"<<endl;
   	cin>>p_unitario;
	cin.ignore();

	cout<<"Ingrese la nueva cantidad total comprada"<<endl;
   	cin>>total_comprado;
	cin.ignore();
}

void C_materia_prima::mostrar()
{
	cout<<"-------------------------------"<<endl;
	cout<<"ID: "<<ID_materia_prima<<endl;
    cout<<"Materia prima: "<<materia_prima<<endl;
    cout<<"Proveedor: "<<proveedor<<endl;
    cout<<"Precio unitario: "<<p_unitario<<endl;
    cout<<"Total comprado: "<<total_comprado<<endl;
    cout<<"-------------------------------"<<endl;
}

#endif

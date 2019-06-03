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

class C_materia_prima : public C_sistema//C_MATERIA PRIMA HEREDA ATRIBUTOS Y MËTODOS DE C_SISTEMA
{
      public://ATRIBUTOS
      	int ID_materia_prima;
       	string materia_prima;
       	string proveedor;
       	float p_unitario;
       	float total_comprado;
       	float costo_total;
       
      public://MÉTODOS
        C_materia_prima();
        void agregar();
        void editar();
        void mostrar();
};
//CONSTRUCTOR
C_materia_prima::C_materia_prima()
{
	//SE RESERVA ESPACIO EN MEMORIA DE ID_MATERIA_PRIMA Y DEL COSTO
	ID_materia_prima=1;
	costo_total=0;
};
//MÉTODO AGREGAR MATERIA PRIMA
void C_materia_prima::agregar()
{
	//SE SOLICITAN LOS DATOS DE LA MATERIA PRIMA
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
//MÉTODO EDITAR MATERIA PRIMA
void C_materia_prima::editar()
{
	//SE SOLICITA LA NUEVA INFORMACION DE LA MATERIA PRIMA
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
//METODO MOSTRAR REGISTRO
void C_materia_prima::mostrar()
{
	//MUESTRA EL REGISTRO SOLICITADO
	cout<<"-------------------------------"<<endl;
	cout<<"ID: "<<ID_materia_prima<<endl;
    cout<<"Materia prima: "<<materia_prima<<endl;
    cout<<"Proveedor: "<<proveedor<<endl;
    cout<<"Precio unitario: "<<p_unitario<<endl;
    cout<<"Total comprado: "<<total_comprado<<endl;
    cout<<"-------------------------------"<<endl;
}

#endif

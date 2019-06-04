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
	
    cout<<"\n\t\tIngresa el nombre de la materia prima:";
   	getline(cin, materia_prima);
    
    cout<<"\n\t\tIngresa el nombre del proveedor:";
   	getline(cin, proveedor);
    
   	cout<<"\n\t\tIngrese el precio unitario:";
   	cin>>p_unitario;
	cin.ignore();
	
	cout<<"\n\t\tIngrese la cantidad total comprada:";
   	cin>>total_comprado;
	cin.ignore();
}
//MÉTODO EDITAR MATERIA PRIMA
void C_materia_prima::editar()
{
	//SE SOLICITA LA NUEVA INFORMACION DE LA MATERIA PRIMA
	cout<<"\n\t\tIngresa el nuevo nombre de la materia prima:";
   	getline(cin, materia_prima);
    
    cout<<"\n\t\tIngresa el nuevo nombre del proveedor:";
   	getline(cin, proveedor);
    
   	cout<<"\n\t\tIngrese el nuevo precio unitario:";
   	cin>>p_unitario;
	cin.ignore();

	cout<<"\n\t\tIngrese la nueva cantidad total comprada:";
   	cin>>total_comprado;
	cin.ignore();
}
//METODO MOSTRAR REGISTRO
void C_materia_prima::mostrar()
{
	//MUESTRA EL REGISTRO SOLICITADO
	cout<<"\n\t\t-------------------------------"<<endl;
	cout<<"\n\t\tID: "<<ID_materia_prima<<endl;
    cout<<"\n\t\tMateria prima: "<<materia_prima<<endl;
    cout<<"\n\t\tProveedor: "<<proveedor<<endl;
    cout<<"\n\t\tPrecio unitario: "<<p_unitario<<endl;
    cout<<"\n\t\tTotal comprado: "<<total_comprado<<endl;
    cout<<"\n\t\t-------------------------------"<<endl;
}

#endif

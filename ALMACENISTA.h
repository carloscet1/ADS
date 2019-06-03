/*
06/06/2019

�lvarez Santiago Daniela
Rojas Sol�s Juan Carlos
Servin Zamora Alejandro

PROYECTO

*/
#ifndef _ALMACENISTA_H
#define _ALMACENISTA_H
#include "SISTEMA.h"

using namespace std;

class C_almacenista : public C_sistema//C_ALMACENISTA HEREDA ATRIBUTOS Y M�TODOS DE C_SISTEMA
{
      public://ATRIBUTOS
      	int ID_almacenista;
      	string nombre_almacenista;
        
      public://M�TODOS
      	C_almacenista();
		void agregar();
        void editar();
        void mostrar();
		void imprimir_reporte();  
};

//CONSTRUCTOR
C_almacenista::C_almacenista()
{
	//SE INICIALIZA EL ID DE ALMACENISTAS EN 1
	ID_almacenista=1;
};
//M�TODO AGREGAR 
void C_almacenista::agregar()
{
	ID_almacenista;
	//SE PIDE EL  NOMBRE DEL ALMACENISTA
    cout<<"Ingresa el nombre del almacenista"<<endl;
   	getline(cin, nombre_almacenista);
}

void C_almacenista::editar()
{
	//PIDE EL NUEVO NOMBRE POR EL QUE SE SUSTITUIRA EL ACTUAL
	cout<<"Ingresa el nuevo nombre del almacenista"<<endl;
   	getline(cin, nombre_almacenista);
}

void C_almacenista::mostrar()
{
	//MUESTRA EL ID Y EL NOMBRE DEL ALMACENISTA
	cout<<"-------------------------------"<<endl;
	cout<<"ID: "<<ID_almacenista<<endl;
    cout<<"Nombre: "<<nombre_almacenista<<endl;
    cout<<"-------------------------------"<<endl;
}

void C_almacenista::imprimir_reporte()
{
	//MUESTRA TODOS LOS REGISTROS HECHOS HASTA EL MOMENTO DE LA CONSULTA
	cout<<"-------------------------------"<<endl;
	cout<<"REPORTE DEL ALMACENISTA: "<<nombre_almacenista<<endl;
	cout<<"ID: "<<ID_almacenista<<endl;
    cout<<"Nombre: "<<nombre_almacenista<<endl;
    cout<<"-------------------------------"<<endl;
}
#endif

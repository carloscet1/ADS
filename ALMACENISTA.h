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

class C_almacenista : public C_sistema//C_ALMACENISTA HEREDA ATRIBUTOS Y MÉTODOS DE C_SISTEMA
{
      public://ATRIBUTOS
      	int ID_almacenista;
      	string nombre_almacenista;
        
      public://MÉTODOS
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
//MÉTODO AGREGAR 
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

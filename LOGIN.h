/*
06/06/2019

Álvarez Santiago Daniela
Rojas Solís Juan Carlos
Salgado Casiano Milton Aldair
Servin Zamora Alejandro

PROYECTO

*/
#ifndef _LOGIN_H
#define _LOGIN_H
#include "MENU.h"
#include <iostream>
#include <cstdlib> 
#include <string>
#include<ctime>
#include<conio.h>

using namespace std;

class C_login
{
    public://ATRIBUTOS
        string intento_usuario;
        char intento_contrasena;
        int flag1,c;
        C_menu objeto4;
             
    private://ATRIBUTOS QUE NO SON PUBLICOS SOLO PARA LAS CLASES HIJAS Y ELLA MISMA
    	string usuario;
      	string contrasena;
      	
    public://MÉTODOS
        C_login();
        void login();
        void bienvenida();
};	

//CONSTRUCTOR
C_login::C_login()
{
	//SE INICIALIZAN LOS ATRIBUTOS
	flag1=0;
	usuario = "admin";
    contrasena = "MyNewP4ss!";
    intento_contrasena = ' ';
    c = 0;
};

//MUESTRA BIENVENIDA
void C_login::bienvenida()
{
	time_t tiempo;
	time(&tiempo);
	cout<<"                                                                                                         \n";
	cout<<"---------------------------------------------------------------------------------------------------------\n";
	cout<<"\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\xbd\t     BIENVENIDO A  \t \xbd\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\xbd  SISTEMA DE GESTION DE INVENTARIO Y PERSONAL PARA MAQUILADORA \t \xbd\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n";
	cout<<"\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n";
		cout<<"\t\t\t\t\t"<<ctime(&tiempo);
	cout<<"\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n";	
	 
system("pause");
system("cls");
}
//VALIDACION DE ENTRADA CON MÉTODO LOGIN
void C_login::login()
{
	do
	{
		//EL PROGRAMA SOLICITA CONTRASEÑA Y USARIO
		cout<<"\n\n\n\t\t\tUSUARIO:";
		cin>>intento_usuario;
		
		cout<<"\n\n\n\t\t\tCONTRASENA:";
		do
		{
    		intento_contrasena = getch();

			if (intento_contrasena == 13 || intento_contrasena == ' ')
        	{
            	break;
        	}
        	
			if( (intento_contrasena==8 || intento_contrasena==127) &&  !contrasena.empty())
   		 	{
   		     	cout<<"\b \b";
        		contrasena.erase(contrasena.size()-1);
        		c--;
   		 	}
   		 	
   		 	else
   		 	{
   		 		contrasena+=intento_contrasena;
   		 		cout<<"*";
				c++;
			}
		}while(intento_contrasena!=13 || intento_contrasena!=' ');
		//VERIFICA QUE EL USUARIO INGRESO DATOS CORRECTOS PARA INGRESAR AL SISTEMA
		if(intento_usuario==usuario && c==10)
		{
			cout<<"\n\n\t\t\tENTRADA AL SISTEMA DE MANERA CORRECTA"<<endl;
			system("pause");
			system("cls");
			objeto4.menu_general();//LLAMA A MENU PRINCIPAL DEL SISTEMA
			exit(0);
		}
			
		else
		{
			cout<<"\nNombre de usuario o contrasena incorrecto, intente nuevamente"<<endl;
			system("pause");
			system("cls");
			flag1 ++;//LLEVA EL CONTEO DE INTENTOS QUE LLEVA EL USUARIO PARA LOGEARSE
		}
	}while(flag1<3);//LE DA TRES INTENTOS AL USUARIO PARA PODER INGRESAR AL SISTEMA
	//LE AVISA AL USUARIO QUE YA NO LE QUEDAN MÁS INTENTOS Y EL PROGRAMA TERMINA
	cout<<"Se ha introducido el nombre de usuario o contrasena 3 veces de manera incorrecta"<<endl;
}

#endif

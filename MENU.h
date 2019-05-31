/*
06/06/2019

Álvarez Santiago Daniela
Rojas Solís Juan Carlos
Sanchez Lemus Ulises Mariano
Servin Zamora Alejandro

PROYECTO

*/
#ifndef _MENU_H
#define _MENU_H
#include "ALMACENISTA.h"
#include "MATERIA_PRIMA.h"
#include<vector>

using namespace std;

class C_menu
{
	public:	
	    char opcion;
	    vector<C_almacenista> dato2;
 		C_almacenista objeto2;
	    vector<C_materia_prima> dato3;
 		C_materia_prima objeto3;
		int verificar,pos,flag2,flag3;

	public:
	    C_menu();
	    void menu_general();
	    void menu_almacenista();
	    void menu_materia_prima();
};

C_menu::C_menu()
{
	pos=-1;
	flag2=0;
	flag3=0;
};

void C_menu::menu_general()
{
do
    {
      cout<<"Selecciona una opcion"<<endl;
      cout<<"1.- Menu de almacenista"<<endl;
      cout<<"2.- Menu de materia prima"<<endl;
      cout<<"3.- Salir"<<endl;
      cin>>opcion;
      cin.ignore();
      switch(opcion)
      {
       	case '1':
            menu_almacenista();
            break;
       
       	case '2':
            menu_materia_prima();
            break;
       
       	case '3':
            break;     
       
       	default:
            cout<<"Esa opcion no existe"<<endl;
            break;                    
      }
    }while(opcion!='3');
}

void C_menu::menu_almacenista()
{
do
    {
      cout<<"Selecciona una opcion"<<endl;
      cout<<"1.- Agregar registro almacenista"<<endl;
      cout<<"2.- Eliminar registro almacenista"<<endl;
      cout<<"3.- Buscar registro almacenista"<<endl;
      cout<<"4.- Editar registro almacenista"<<endl;
      cout<<"5.- Mostrar registros almacenistas"<<endl;
      cout<<"6.- Imprimir reporte"<<endl;
      cout<<"7.- Salir"<<endl;
      cin>>opcion;
      cin.ignore();
      switch(opcion)
      {
       	case '1':
       		for(int i=0;i<4;i++)
			{
				if(flag2==0)
				{
					objeto2.ID_almacenista = i+1;
		  			objeto2.agregar();
		  			dato2.push_back(objeto2);
		  		}
		  		
		  		else
				{
					flag2++;
					objeto2.ID_almacenista = flag2;
		  			objeto2.agregar();
		  			dato2.push_back(objeto2);
		  		}
			}
			flag2=objeto2.ID_almacenista;
            break;
       
       	case '2':
       		cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	pos=i;
	            	dato2.erase(dato2.begin()+pos);
	            	break;
				}
	        }
            break;
       
       	case '3':
       		cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	dato2[i].mostrar();
	            	break;
				}
	        }
            break;
		
		case '4':
			cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	dato2[i].editar();
	            	break;
				}
	        }
            break;
        
        case '5':
			for(int i=0; i<dato2.size();i++)
			 {
			  dato2[i].mostrar();
			 }
            break;
            
		case '6':
			cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	dato2[i].imprimir_reporte();
	            	break;
				}
	        }
            break;
							
		case '7':
            break; 		     
       
       	default:
            cout<<"Esa opcion no existe"<<endl;
            break;                    
      }
    }while(opcion!='7');
}

void C_menu::menu_materia_prima()
{
do
    {
      cout<<"Selecciona una opcion"<<endl;
      cout<<"1.- Agregar registro materia prima"<<endl;
      cout<<"2.- Eliminar registro materia prima"<<endl;
      cout<<"3.- Buscar registro materia prima"<<endl;
      cout<<"4.- Editar registro materia prima"<<endl;
      cout<<"5.- Mostrar registros materia prima"<<endl;
      cout<<"6.- Costo total por producto"<<endl;
      cout<<"7.- Salir"<<endl;
      cin>>opcion;
      cin.ignore();
      switch(opcion)
      {
       	case '1':
      		for(int i=0;i<4;i++)
			{
				if(flag3==0)
				{
					objeto3.ID_materia_prima = i+1;
		  			objeto3.agregar();
		  			dato3.push_back(objeto3);
		  		}
		  		
		  		else
				{
					flag3++;
					objeto3.ID_materia_prima = flag3;
		  			objeto3.agregar();
		  			dato3.push_back(objeto3);
		  		}
			}
			flag3=objeto3.ID_materia_prima;
            break;
       
       	case '2':
       		cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	        for(int i=0; i<dato3.size();i++)
			{
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	pos=i;
	            	dato3.erase(dato3.begin()+pos);
	            	break;
				}
	        }
            break;
       
       	case '3':
       		cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	        for(int i=0; i<dato3.size();i++)
			{
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	dato3[i].mostrar();
	            	break;
				}
	        }
            break;
		
		case '4':
			cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	        for(int i=0; i<dato3.size();i++)
			{
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	dato3[i].editar();
	            	break;
				}
	        }
            break;
            
		case '5':
			for(int i=0; i<dato3.size();i++)
			 {
			  dato3[i].mostrar();
			 }
            break;
					
		case '6':
			cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	        for(int i=0; i<dato3.size();i++)
			{
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	objeto3.costo_total = dato3[i].total_comprado*dato3[i].p_unitario;
	            	cout<<"El costo calculado es: "<<objeto3.costo_total<<endl;
	            	break;
				}
	        }
            break;			
		
		case '7':
            break; 		     
       
       	default:
            cout<<"Esa opcion no existe"<<endl;
            break;
			    
    	}
	}while(opcion!='7');
}
#endif

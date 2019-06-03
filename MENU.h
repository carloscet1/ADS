/*
06/06/2019

Álvarez Santiago Daniela
Rojas Solís Juan Carlos
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
		  	objeto2.agregar();
		  	dato2.push_back(objeto2);
		  	objeto2.ID_almacenista++;
		  	cout<<"-------------------------------"<<endl;
			cout<<"REGISTRO AGREGADO EXITOSAMENTE"<<endl;
    		cout<<"-------------------------------"<<endl;
            break;
       
       	case '2':
       		cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag2=0;
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	pos=i;
	            	dato2.erase(dato2.begin()+pos);
    				flag2=1;
				}
	        }
	    
	        if(flag2==1)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO ELIMINADO EXITOSAMENTE"<<endl;
    			cout<<"-------------------------------"<<endl;
			}
			
			else
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
			}
            break;
       
       	case '3':
       		cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag2=0;
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	dato2[i].mostrar();
	            	flag2=1;
	            	break;
				}
	        }
	        
	        if(flag2==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
			}
            break;
		
		case '4':
			cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag2=0;
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	dato2[i].editar();
	            	flag2=1;
				}
	        }
	        
		 	 if(flag2==1)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO EDITADO EXITOSAMENTE"<<endl;
    			cout<<"-------------------------------"<<endl;
			}
			
			else
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
			}
            break;
        
        case '5':
        	flag2=0;
			for(int i=0; i<dato2.size();i++)
			 {
			  dato2[i].mostrar();
			  flag2=1;
			 }
			
			if(flag2==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"NO SE ENCONTRARON REGISTROS"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
			}
            break;
            
		case '6':
			cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag2=0;
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	dato2[i].imprimir_reporte();
	            	flag2=1;
	            	break;
				}
	        }
	        
	        if(flag2==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
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
			objeto3.agregar();
		  	dato3.push_back(objeto3);
		  	objeto3.ID_materia_prima++;
		  	cout<<"-------------------------------"<<endl;
			cout<<"REGISTRO AGREGADO EXITOSAMENTE"<<endl;
    		cout<<"-------------------------------"<<endl;
            break;
       
       	case '2':
			cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag3=0;
	        for(int i=0; i<dato3.size();i++)
			{
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	pos=i;
	            	dato3.erase(dato3.begin()+pos);
    				flag3=1;
				}
	        }
	    
	        if(flag3==1)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO ELIMINADO EXITOSAMENTE"<<endl;
    			cout<<"-------------------------------"<<endl;
			}
			
			else
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
			}
            break;
       
       	case '3':
	        cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag3=0;
	        for(int i=0; i<dato3.size();i++)
			{
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	dato3[i].mostrar();
	            	flag3=1;
	            	break;
				}
	        }
	        
	        if(flag3==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
			}
            break;
		
		case '4':
	        cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag3=0;
	        for(int i=0; i<dato3.size();i++)
			{
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	dato3[i].editar();
	            	flag3=1;
				}
	        }
	        
		 	if(flag3==1)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO EDITADO EXITOSAMENTE"<<endl;
    			cout<<"-------------------------------"<<endl;
			}
			
			else
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
			}
            break;
            
		case '5':
			flag3=0;
			for(int i=0; i<dato3.size();i++)
			 {
			  dato3[i].mostrar();
			  flag3=1;
			 }
			
			if(flag3==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"NO SE ENCONTRARON REGISTROS"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
			}
            break;
					
		case '6':
	        cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag3=0;
	        for(int i=0; i<dato3.size();i++)
			{
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	objeto3.costo_total = dato3[i].total_comprado*dato3[i].p_unitario;
	            	cout<<"El costo calculado es: "<<objeto3.costo_total<<endl;
	            	flag3=1;
	            	break;
				}
	        }
	        
	        if(flag3==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
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

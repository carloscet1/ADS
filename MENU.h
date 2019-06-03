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
	public://ATRIBUTOS	
	    char opcion;
	    vector<C_almacenista> dato2;
 		C_almacenista objeto2;
	    vector<C_materia_prima> dato3;
 		C_materia_prima objeto3;
		int verificar,pos,flag2,flag3;

	public://MÉTODOS 
	    C_menu();
	    void menu_general();
	    void menu_almacenista();
	    void menu_materia_prima();
};
//CONSTRUCTOR DE MENU
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
       		//SE LIMPIA PANTALLA Y SE DESPLEGARA EL MENU DEL ALMACENISTA
       		system("cls");
            menu_almacenista();
            break;
       
       	case '2':
       		//SE LIMPIA PANTALLA Y SE DESPLEGRARA EL MENU MATERIA_PRIMA
       		system("cls");
            menu_materia_prima();
            break;
       
       	case '3':
       		//CON ESTA OPCION SE SALE DEL PROGRAMA
            break;     
       
       	default:
       		//SIRVE PARA DECIRLE AL USUARIO QUE NO EXISTE ESA OPCIÓN
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
       		//BORRA PANTALLA Y DESPLIEGA EL MÉTODO AGREGAR DE LA CLASE ALMACENISTA
       		system("cls");
		  	objeto2.agregar();
		  	dato2.push_back(objeto2);//SE GUARDA EL NOMBRE DEL ALMACENISTA
		  	objeto2.ID_almacenista++;//SE DA EL INCREMENTO DEL ID PARA EL SIGUIENTE REGISTRO
		  	cout<<"-------------------------------"<<endl;
			cout<<"REGISTRO AGREGADO EXITOSAMENTE"<<endl;
    		cout<<"-------------------------------"<<endl;
            break;
       
       	case '2':
       		//BORRA LA PANTALLA Y DESPLIEGA EL MÉTODO ELIMINAR ALMACENISTA
       		system("cls");
       		cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;//INGRESA EL ID DEL ALMACENISTA QUE DECEA ELIMINAR
	    	cin.ignore();
	    	flag2=0;
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	pos=i;
	            	dato2.erase(dato2.begin()+pos);//BORRA EL REGISTRO CON EL ID INGRESADO 
    				flag2=1;//NOS DICE SI ENTRO A ELIMINAR EL REGITRO SOLICITADO
				}
	        }
	        //VALIDA SI EL REGISTRO FUE ELIMINADO O NO
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
       		//LIMPIA PANTALLA Y DESPLIEGA EL MÉTODO BUSCAR DE LA CLASE ALMACENISTA
       		system("cls");
       		cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag2=0;
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	dato2[i].mostrar();//DESPLIEGA EL MÉTODO MOSTRAR DE ALMACENISTA
	            	flag2=1;//NOS DICE SI FUE ENCONTRADO EL REGISTRO
	            	break;
				}
	        }
         //LE ENVIA UN AVISO AL USUARIO SI FUE EDITADO CORRECTAMENTE EL REGISTRO O NO
	        if(flag2==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
			}
            break;
		
		case '4':
			//LIMPIA LA PANTALLA Y DESPLIEGA EL MÉTODO EDITAR DE LA CLASE ALMACENISTA
			system("cls");
			cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag2=0;
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	dato2[i].editar();//EDITA EL REGISTRO
	            	flag2=1;//NOS DICE SI FUE EDITADO EL REGISTRO
				}
	        }
	        //LE ENVIA UN AVISO AL USUARIO SI FUE EDITADO CORRECTAMENTE EL REGISTRO O NO
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
        	//LIMPIA PANTALLA Y DESPLIEGA EL MÉTODO MOSTRAR REGISTROS 
        	system("cls");
        	flag2=0;
			for(int i=0; i<dato2.size();i++)
			 {
			  dato2[i].mostrar();//MUESTRA TODOS LOS REGISTROS DE ALMACENISTA
			  flag2=1;//NOS DICE SI NO SE ENCONTRARON REGISTROS
			 }
             //LE ENVIA UN AVISO AL USUARIO SI NO HAY REGISTROS
			if(flag2==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"NO SE ENCONTRARON REGISTROS"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
			}
            break;
            
		case '6':
			//LIMPIA LA PANTALLA Y DESPLIEGA EL EL MÉTODO IMPRIME REPORTE
			system("cls");
			cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag2=0;
	        for(int i=0; i<dato2.size();i++)
			{
	            if(dato2[i].ID_almacenista==verificar)
	           	{
	            	dato2[i].imprimir_reporte();//MUESTRO TODOS LOS REGISTROS HECHOS
	            	flag2=1;//NOS DICE SI FUE ENCONTRADO ALGUN REGISTRO
	            	break;
				}
	        }
	        //AVISA AL USUARIO SI NO HAY REGISTROS
	        if(flag2==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
			}
            break;
							
		case '7':
			//LIMPIA PANTALLA Y SALE DEL MENU ALMACENISTA
			system("cls");
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
       		//LIMPIA PANTALLA Y DESPLIEGA EL MÉTODO AGREGAR DE LA CLASE MATERIA PRIMA
       		system("cls");
			objeto3.agregar();
		  	dato3.push_back(objeto3);//GUARDA EL NOMBRE DE LA MATERIA PRIMA Y EL ID
		  	objeto3.ID_materia_prima++;//INCREMENTA EL ID DE LA MATERIA PRIMA PARA EL SIGUIENTE REGISTRO
		  	cout<<"-------------------------------"<<endl;
			cout<<"REGISTRO AGREGADO EXITOSAMENTE"<<endl;
    		cout<<"-------------------------------"<<endl;
            break;
       
       	case '2':
       		//LIMPIA PANTALLA Y DEPSLIEGA EL MÉTODO ELIMINAR DE LA CLASE MATERIA PRIMA
       		system("cls");
			cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag3=0;
	        for(int i=0; i<dato3.size();i++)
			{
				//BUSCA EL REGISTRO 
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	pos=i;
	            	dato3.erase(dato3.begin()+pos);//BORRA EL REGISTRO SOLICITADO
    				flag3=1;//NOS DICE SI FUE ENCONTRADO  Y ELIMINADO EL REGISTRO
				}
	        }
  	 		//LE AVISA AL USUARIO SI FUE EXITOSO O NO ELIMINAR EL REGISTRO
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
       		//LIMPIA PANTALLA Y DESPLIEGA EL MÉTODO DE LA CLASE MATERIA PRIMA
       		system("cls");
	        cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag3=0;
	        for(int i=0; i<dato3.size();i++)
			{
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	dato3[i].mostrar();//MUESTRA LOS DATOS SOLICITADOS
	            	flag3=1;//NOS DICE SI HAY DATOS QUE LEER
	            	break;
				}
	        }
	        //LE MANDA UN AVISO AL USUARIO DE QUE NO SE ENCONTRARON REGISTROS
	        if(flag3==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
			}
            break;
		
		case '4':
			//LIMPIA PANTALLA Y DESPLIEGA EL MÉTODO DE LA CLASE MATERIA PRIMA 
			system("cls");
	        cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag3=0;
	    	//BUSCA EL ID INGRESADO
	        for(int i=0; i<dato3.size();i++)
			{
				//BUSCA EL ID INGRESADO POR EL USUARIO
	            if(dato3[i].ID_materia_prima==verificar)
	           	{
	            	dato3[i].editar();//EL SISTEMA PIDE EL NUEVO NOMBRE
	            	flag3=1;//NOS DICE SI FUE ENCONTRADO EL ID
				}
	        }
	        //LE MANDA UN MENSAJE AL USUARIO DE QUE SE LOGRO O NO  EDITAR EL REGISTRO
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
			//LIMPIA PANTALLA Y DESPLIEGA EL MÉTODO MOSTRAR REGISTROS DE MATERIA PRIMA
			system("cls");
			flag3=0;
			for(int i=0; i<dato3.size();i++)
			 {
			 	//MUESTRA TODOS LOS REGISTROS HECHOS
			  dato3[i].mostrar();
			  flag3=1;//NOS INDICA SI HAY ALGO QUE MOSTRAR O NO
			 }
			//MUESTRA UN AVISO SI NO HAY REGISTROS
			if(flag3==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"NO SE ENCONTRARON REGISTROS"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
			}
            break;
					
		case '6':
			//LIMPIA PANTALLA Y DESPLIEGA EL MÉTODO CALCULAR COSTO TOTAL DEL PRODUCTO
			system("cls");
	        cout<<"Ingrese el ID"<<endl;
	    	cin>>verificar;
	    	cin.ignore();
	    	flag3=0;
	        for(int i=0; i<dato3.size();i++)
			{
				//BUSCA EL ID DEL REGISTRO
	            if(dato3[i].ID_materia_prima==verificar)
	           	{	//CALCULA EL COSTO DE LA MATERIA PRIMA
	            	objeto3.costo_total = dato3[i].total_comprado*dato3[i].p_unitario;
	            	cout<<"El costo calculado es: "<<objeto3.costo_total<<endl;
	            	flag3=1;//NOS DICE SI SÍ FUE CALCULADO EL COSTO O SI EXISTE
	            	break;
				}
	        }
	        //LE AVISA AL USUARIO QUE NO FUE ENCONTRADO EL ID INGRESADO
	        if(flag3==0)
	        { 
	            cout<<"-------------------------------"<<endl;
				cout<<"REGISTRO NO ENCONTRADO"<<endl;
    			cout<<"-------------------------------"<<endl;
    			break;
			}
            break;			
		
		case '7':
			//LIMPIA PANTALLA Y SALE DEL MENU MATERIA PRIMA
			system("cls");
            break; 		     
       
       	default:
       		//AVISA AL USUARIO QUE NO ES VALIDA LA OPCIÓN INGRESADA
            cout<<"Esa opcion no existe"<<endl;
            break;
			    
    	}
	}while(opcion!='7');
}
#endif

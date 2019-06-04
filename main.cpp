/*
06/06/2019

Álvarez Santiago Daniela
Rojas Solís Juan Carlos
Servin Zamora Alejandro

PROYECTO

*/
#include "LOGIN.h"

int main()
{
	
	system ("color 0a");//CAMBIA DE COLOR EL FONDO A NEGRO Y LAS LETRAS A VERDE
	C_login objeto1;//SE DECLARA UN OBJETO DE LA CLASE LOGIN
	objeto1.bienvenida();//SE MUESTRA LA BIENVENIDA
	objeto1.login();//SE MUESTRA EL LOGIN Y VALIDA EL ACCESO AL PROGRAMA
	system("PAUSE");
    return 0;
}

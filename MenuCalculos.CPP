#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string>

void main()
{
	const mu = 75, vari = 4;

	int opcion_menu, numero_suscriptores, lineas_tel, rango_inicio,
   	rango_fin, numeros_asumar, diferencia_entre_numeros, suma_rango,
      dado1, dado2, suma_dados;

   bool repeticion_menu, decision;

   string sino;

	do {

		clrscr();
		cout<<"Menu principal\n";
		cout<<"1. Calcular el numero de lineas telefonicas.\n";
		cout<<"2. Calcular las suma de un rando de numeros.\n";
		cout<<"3. Lanzar dados y sumar el resultado.\n";
		cout<<"4. Salir...\n";
	   cout<<"¿Que operacion desea?\n";
	   cin>>opcion_menu;

	   switch(opcion_menu){
	   	case 1:{
   	   	cout<<"Ingrese el numero de suscriptores: \n";
      	   cin>>numero_suscriptores;
	         lineas_tel = (numero_suscriptores*(numero_suscriptores-1)/2);
            cout<<"El numero de linas telefonicas es: "<<lineas_tel<<endl;
  	         cout<<"Desea repetir el menu? si/no";
	         cin>>sino;
				if(sino == "si") {
					decision = true;
            } else {
               decision = false;
            }
	      }
	     	break;
   	   default:{
      		cerr<<"Invalid option...\n";
	      }
	     getch();
	   }
   } while (decision);
}

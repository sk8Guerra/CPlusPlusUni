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
	   cout<<"\nQue operacion desea?\n";
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
         case 2:{
   	   	cout<<"Ingrese el inicio del rango: \n";
      	   cin>>rango_inicio;
            cout<<"Ingrese el fin del rango: \n";
            cin>>rango_fin;
         	numeros_asumar = ((rango_fin - rango_inicio) + 1);
            diferencia_entre_numeros = numeros_asumar - rango_inicio;
            suma_rango = (numeros_asumar/2)*(2*rango_inicio + (numeros_asumar-1)*diferencia_entre_numeros);
            cout<<"El resultado es: "<<suma_rango<<endl;
  	         cout<<"Desea repetir el menu? si/no";
	         cin>>sino;
				if(sino == "si") {
					decision = true;
            } else {
               decision = false;
            }
	      }
	     	break;
         case 3:{
         	cout<<"\nDado 1";
         	dado1 = rand() % 7;
            cout<<"\n"<<dado1;
           	cout<<"\nDado 2";
            dado2 = rand() % 7;
            cout<<"\n"<<dado2;
            suma_dados = dado1 + dado2;
            cout<<"\nLa suma de los dos resultados es: "<<suma_dados<<endl;
  	         cout<<"\nDesea repetir el menu? si/no";
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

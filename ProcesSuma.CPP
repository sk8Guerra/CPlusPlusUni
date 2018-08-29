#include <iostream.h>
#include <conio.h>

float radio, altura, volumen;
const float pi = 3.1416;

void P_Suma();

void main() {
	clrscr();
	P_Suma();
}

void P_Suma () {

	int n1, n2;

	cout<< "Ingrese un valor:";
   cin>>n1;
   cout<< "Ingrese otro valor:";
   cin>>n2;

   cout<<"La suma de los dos numeros es: "<< (n1 + n2) <<endl;
   getch();
}

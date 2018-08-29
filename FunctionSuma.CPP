#include <iostream.h>
#include <conio.h>

float radio, altura, volumen;
const float pi = 3.1416;

int F_Suma(int n1, int n2);

void main() {
	clrscr();
   int n1, n2, suma;

	cout<< "Ingrese un valor:";
   cin>>n1;
   cout<< "Ingrese otro valor:";
   cin>>n2;

   suma = F_Suma(n1, n2);

   cout<<"La suma de los dos numeros es: "<< suma <<endl;
   getch();
}

int F_Suma (int n1, int n2) {
	return (n1 + n2);
}
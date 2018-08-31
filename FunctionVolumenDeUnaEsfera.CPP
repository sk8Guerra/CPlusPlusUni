#include <iostream.h>
#include <conio.h>

const double pi = 3.141592;

double F_VolumenEsfera(double radio);

void main() {
	clrscr();
   double radio, volumen;

	cout<< "Ingrese el radio: ";
   cin>> radio;

   volumen = F_VolumenEsfera(radio);

   cout<<"El volumen de la esfera es: "<< volumen <<endl;
   getch();
}

double F_VolumenEsfera (double radio) {
	return ((4*pi*radio*radio*radio)/3);
}
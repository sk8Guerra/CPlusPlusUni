#include <iostream.h>
#include <conio.h>

double P_VolumenEsfera();

void main() {

	clrscr();
	P_VolumenEsfera();
}

double P_VolumenEsfera() {

	double radio, volumen;
	const double pi = 3.1416;

	cout<<"Ingrese el radio: ";
	cin>>radio;

	volumen = (4*pi*radio*radio*radio)/3;

	cout<<"El volumen de la esfera es: "<<volumen<<" metros cubicos."<<endl;

	getch();
}

#include <iostream.h>
#include <conio.h>

float radio, altura, volumen;
const float pi = 3.1416;

void main() {
	clrscr();
	cout<<"Ingrese los siguientes datos (metros): ";

	cout<<"Radio: ";
	cin>>radio;

	cout<<"Altura: ";
	cin>>altura;

	volumen = pi*radio*radio*altura;

	cout<<"El volumen del cilindro es: "<<volumen<<" metros cubicos."<<endl;

	getch();
}
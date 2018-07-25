#include <iostream>
#include <conio.h>

int grados_celcius;
float grados_fahrenheit;

void main(){
	clrscr();
   cout<<"Ingresa grados centigrados: \n"<<endl;
   cin>>grados_celcius;
   grados_fahrenheit = (grados_celcius*9/5)+(32);
   cout<<"\n"<<grados_celcius<<"C equivale a "<<grados_fahrenheit<<"F";
   getch();
}
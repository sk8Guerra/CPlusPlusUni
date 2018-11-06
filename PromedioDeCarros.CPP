#include <iostream.h>
#include <conio.h>

int main () {
	int carros[3], suma = 0;
   float avg = 0;
	char avenidas [3];

	for (int a = 0; a < 3; a++) {
   	cout << "Ave: ";
      cin >> avenidas[a];
   	cout << "Numero de carros: ";
      cin >> carros[a];
   }

   for (int a = 0; a < 3; a++) {
   	suma = suma + carros[a];
      avg = (suma/7);
   }

   cout<< "El promedio de carros es "<< avg;

	getch();
	return 0;
}
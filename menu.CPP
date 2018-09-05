#include <stdlib.h>
#include <conio.h>
#include <iostReam.h>
#include <string>

void P_menu();
void P_genera_numeros();
void P_vuelto();

int F_suma(int n1, int n2);
int F_grados();

void main() {
   P_menu();
   getch();
}

void P_menu() {
	int opc;
   char resp;
   resp = 's';

   while (resp == 's') {
   	clrscr();
  		cout << "\n\t\t\tMENU PRINCIPAL \n";
		cout << "\n\t 1. Sumar dos numeros enteros."; // func
      cout << "\n\t 2. Generar 25 numeros aleatorios."; //proc
      cout << "\n\t 3. Convertir grados celcius a fahrenheir."; //func
      cout << "\n\t 4. Calcular el vuelto en la compra de un producto."; //proc
      cout << "\n\t 5. Salir. \n";
      cout << "\n\t Eliga su opcion \n";
      cout << "\n\t ";
      cin >> opc;
      switch(opc) {
			case 1: {
         	int suma, n1, n2;
            cout << "\n\t ";
            cout << "Ingrese el primer numero: ";
            cin >> n1;
            cout << "\n\t ";
            cout << "Ingrese el segundo numero:";
            cin >> n2;
            suma = F_suma(n1, n2);
            cout << "\n\t ";
            cout << "La suma de los numeros ingresados es: " << suma << endl;
            getch();
         }; break;
  			case 2: {
         	P_genera_numeros();
         }; break;
  			case 3: {
         	int grad;
            grad = F_grados();
            cout << "\n\t ";
            cout <<"La conversion de grados Celsius a Farenheit es de: "<<grad<<endl;
         }; break;
  			case 4: {
				P_vuelto();
         }; break;
  			case 5: {
         	exit(1);
         }; break;
         default: {
        	   cout << "\n\t ";
	         cerr << "Opcion invalida \n";
         }
      }
      cout << "\n\t ";
		cout << "Desea repetir el menu? s/n";
      cin >> resp;
   }
}

int F_suma(int n1, int n2) {
	return (n1 + n2);
}

int F_grados() {
 float c, result;
 cout << "\n\t ";
 cout<<"Ingrese grados a convertir Celsius: \n";
 cout << "\n\t ";
 cin >>c;
 result = c * 9/5 + 32;
 return result;
}

void P_genera_numeros() {
	int generated_number;
   for(int n = 1; n <= 25; n++) {
   	// 25 donde comienza. Suma de los dos menos 1, donde finaliza.
		generated_number = rand()%26+25;
      cout << "\n\t ";
      cout << "Los numeros generados son: " << generated_number << endl;
   }
}

void P_vuelto() {

	string nombre;
   int cantidad, precio, total, dinero, vuelto;

   cout << "\n\t ";
	cout << "Nombre del producto: ";
   cin >> nombre;

   cout << "\n\t ";
   cout << "Cantidad del producto: ";
   cin >> cantidad;

   cout << "\n\t ";
   cout << "Precio del producto: ";
   cin >> precio;

   total = precio * cantidad;
   cout << "\n\t ";
  	cout << "Total a pagar: " << total << endl;

   cout << "\n\t ";
   cout << "Que canidad va a ingresar de dinero: ";
   cin >> dinero;

   vuelto = dinero - total;

   cout << "\n\t ";
   cout << "El vueldo es: " << vuelto << endl;
}






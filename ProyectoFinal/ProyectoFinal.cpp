#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

struct Empleado {
	char codigo[20];
	char nombre[50];
	char codigotemp[20];
	int edad;
	char puesto[50];
	float sueldo;
};

void guardar(Empleado guardar) {
	fstream archivo;
	archivo.open("abcEmpleados.bin", ios::out | ios::app | ios::binary);
	archivo.write((char *)&guardar, sizeof(Empleado));
	archivo.close();
}

void mostrarEmpleados()
{
	Empleado mostrar;
	fstream archivo("abcEmpleados.bin", ios::in | ios::binary);
	if (archivo.fail()) {
		cerr << "Error al abrir abcEmpleados.bin" << endl;
	}
	else {
		while (!archivo.eof())
		{
			archivo.read((char*)&mostrar, sizeof(Empleado));

			if (!archivo.eof())
			{
				cout << "\nCodigo: " << mostrar.codigo;
				cout << "\nNombre: " << mostrar.nombre;
				cout << "\nPuesto: " << mostrar.puesto;
				cout << "\nEdad: " << mostrar.edad;
				cout << "\nSueldo: " << mostrar.sueldo;
				cout << "\n";
			}
		}
		cout << "\n";
	}
	archivo.close();
}

int main()
{
	int opcion = 0;
	char espacio[2];
	Empleado emp;
	do {
		cout << "----------Menu----------" << endl;
		cout << "1. Agregar empleado" << endl;
		cout << "2. Mostrar empleados" << endl;
		cout << "3. Editar empleado" << endl;
		cout << "4. Eliminar empleado" << endl;
		cout << "----------" << endl;
		cout << "0. Salir" << endl;
		cout << "----------" << endl;
		cout << "Que opcion desea: ";
		cin >> opcion;
		switch (opcion) {
		case 1:

			cin.getline(espacio, 2);

			cout << "\nCodigo: ";
			cin.getline(emp.codigo, 20, '\n');
			
			cout << "Nombre: ";
			cin.getline(emp.nombre, 50, '\n');

			cout << "Puesto: ";
			cin.getline(emp.puesto, 50, '\n');

			cout << "Edad: ";
			cin >> emp.edad, '\n';

			cout << "Sueldo: ";
			cin >> emp.sueldo, '\n';

			guardar(emp);
			system("pause");
			break;
		case 2:
			cout << "\n -----Mostrando Datos Almacenados----- \n";
			mostrarEmpleados();
			system("pause");
			break;
		case 4:
			ifstream archivo;
			archivo.open("abcEmpleados.bin", ios::in | ios::app | ios::binary);
				
			ofstream temp; 
			temp.open("tempabcEmpleados.bin", ios::out| ios::app | ios::binary);
				
			cout << "Ingrese el codigo del empleado: " << endl;
			cin >> emp.codigotemp;
			archivo>> emp.codigo;
		
			while (!archivo.eof())
			{
				archivo>>emp.nombre[50]>>emp.puesto[50]>>emp.edad>>emp.sueldo;
				if(emp.codigotemp==emp.codigo)
				{
					cout<<"El registro del empleado se ha eliminado";
					getch();
				} else {
					temp<<emp.codigo[20]<<" "<<emp.nombre[50]<<" "<<emp.puesto[50]<<" "<<emp.edad<<" "<<emp.sueldo;
				}		
			}
			archivo.close();
			temp.close();
				
			remove("abcEmpleados.bin");
			rename("tempabcEmpleados.bin","abcEmpleados.bin");
			break;
		}
		system("cls");
	} while (opcion != 3);
	return 0;
}


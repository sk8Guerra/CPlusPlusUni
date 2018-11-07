#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>

using namespace std;

struct Empleado {
	char codigo[20];
	char nombre[50];
	int edad;
	char puesto[50];
	float sueldo;
};

void crear (Empleado guardar) {
	fstream archivo;
	archivo.open("abcEmpleados.bin", ios::out | ios::app | ios::binary);
	archivo.write((char *)&guardar, sizeof(Empleado));
	archivo.close();
	cout << "\n";
}

void leer () {
	Empleado mostrar;
	fstream archivo("abcEmpleados.bin", ios::in | ios::binary);
	if (archivo.fail()) {
		cerr << "Error al abrir abcEmpleados.bin" << endl;
	}
	else {
		system("cls");
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
		getch();
		
	}
	archivo.close();
}

void borrar (char code[]) {
	Empleado mostrar;
	ifstream archivo;
	archivo.open("abcEmpleados.bin", ios::out | ios::app | ios::binary);
	
	if(archivo.fail())
		cout << "Error al abrir el archivo abcEmpleados.bin" << endl;

	ofstream temp;
	temp.open("tempabcEmpleados.bin", ios::out | ios::app | ios::binary);
	
	if(archivo.fail()) 
		cout << "Error al abrir el archivo tempabcEmpleados.bin" << endl;
	
	while (!archivo.eof())
	{
		archivo.read((char*)&mostrar, sizeof(Empleado));
		if (strcmp(mostrar.codigo, code)) {
			temp.write((char *)&mostrar, sizeof(Empleado));
		}
	}
	cout << "\n";
	
	archivo.close();
	temp.close();

	remove("abcEmpleados.bin");
	rename("tempabcEmpleados.bin","abcEmpleados.bin");
}

int main()
{
	int opcion = 0;
	char espacio[2];
	char employeeCode[] = "";
	Empleado emp;
	do {
		system("cls");
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

			crear(emp);
			cout << "Creado exitosamente";
			getch();
			break;
		case 2:
			cout << "\n -----Mostrando Datos Almacenados----- \n";
			leer();
			break;
		case 3:
			cout << "\n -----Editando----- \n";
			getch();
			break;
		case 4:
			cout << "\nIngrese el codigo del empleado: " << endl;
			cin >> employeeCode;
			borrar(employeeCode);
			cout << "Borrado exitosamente";
			getch();
			break;
		}
	} while (opcion != 0);
	return 0;
}

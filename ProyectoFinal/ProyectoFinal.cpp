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

void crear();
void leer();
void editar();
void borrar();
void reporte();

int main () {
	int opcion = 0;
	do {
		system( "cls" );
		cout << "----------Menu----------" << endl;
		cout << "1. Agregar" << endl;
		cout << "2. Mostrar" << endl;
		cout << "3. Editar" << endl;
		cout << "4. Eliminar" << endl;
		cout << "5. Reporte" << endl;
		cout << "----------" << endl;
		cout << "0. Salir" << endl;
		cout << "----------" << endl;
		cout << "Que opcion desea: ";
		cin >> opcion;
		switch ( opcion ) {
		case 1:
			cout << "\n -----Agregando----- \n";
			crear();
			getch();
			break;
		case 2:
			cout << "\n -----Mostrando----- \n";
			leer();
			getch();
			break;
		case 3:
			cout << "\n -----Editando----- \n";
			editar();
			getch();
			break;
		case 4:
			cout << "\n -----Eliminando----- \n";
			borrar();
			getch();
			break;
		case 5:
			cout << "\n -----Reporte (mayores 55)----- \n";
			reporte();
			getch();
			break;
		}
	} while ( opcion != 0 );
	return 0;
}

void crear () {
	
	char espacio[2];
	Empleado emp;

	cin.getline (espacio, 2 );

	cout << "\nCodigo: ";
	cin.getline( emp.codigo, 20, '\n' );

	cout << "Nombre: ";
	cin.getline( emp.nombre, 50, '\n' );

	cout << "Puesto: ";
	cin.getline( emp.puesto, 50, '\n' );

	cout << "Edad: ";
	cin >> emp.edad, '\n';

	cout << "Sueldo: ";
	cin >> emp.sueldo, '\n';
		
	fstream archivo;
	archivo.open( "abcEmpleados.bin", ios::out | ios::app | ios::binary );
	archivo.write( ( char * ) & emp, sizeof( Empleado ) );
	archivo.close();
	cout << "\n";
	cout << "Creado exitosamente";
}

void leer () {
	Empleado mostrar;
	fstream archivo( "abcEmpleados.bin", ios::in | ios::binary );
	if ( archivo.fail() ) {
		cerr << "Error al abrir abcEmpleados.bin" << endl;
	}
	else {
		system( "cls" );
		while ( !archivo.eof() )
		{
			archivo.read( ( char* ) & mostrar, sizeof( Empleado ) );

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
	cout << "Mostrado exitosamente";
}

void editar() {
	Empleado emp;
	char espacio[2];
	
	char code[] = "";
	
	cout << "\nIngrese el codigo del empleado a editar: " << endl;
	cin >> code;

	ifstream archivo;
	archivo.open("abcEmpleados.bin", ios::out | ios::app | ios::binary);
	
	if (archivo.fail()) 
		cout << "Error al abrir el archivo abcEmpleados.bin" << endl;

	ofstream temp;
	temp.open("tempabcEmpleados.bin", ios::out | ios::app | ios::binary);

	if (temp.fail()) 
		cout << "Error al abrir el archivo tempabcEmpleados.bin" << endl;
	
	while ( !archivo.eof() ) {
		archivo.read( ( char* ) & emp, sizeof( Empleado ) );
		if( !archivo.eof() ) {
			if ( strcmp( emp.codigo, code ) == 0 ) {
				cout << "\nCodigo: " << emp.codigo;
				cout << "\nNombre: " << emp.nombre;
				cout << "\nPuesto: " << emp.puesto;
				cout << "\nEdad: " << emp.edad;
				cout << "\nSueldo: " << emp.sueldo << endl;
				
				cin.getline( espacio, 2 );
				
				cout << "Nuevo nombre: ";
				cin.getline( emp.nombre, 50, '\n' );
	
				cout << "Nuevo puesto: ";
				cin.getline( emp.puesto, 50, '\n' );
	
				cout << "Nuevo edad: ";
				cin >> emp.edad, '\n';
	
				cout << "Nuevo sueldo: ";
				cin >> emp.sueldo, '\n';
	
				temp.write( (char *) & emp, sizeof( Empleado ) );
			} else {
				temp.write( (char *) & emp, sizeof( Empleado ) );
			}		
		}
	}
	
	archivo.close();
	temp.close();

	remove( "abcEmpleados.bin" );
	rename( "tempabcEmpleados.bin", "abcEmpleados.bin" );
	
	cout << "Actualizado exitosamente";		
}

void borrar () {
	Empleado mostrar;
	char employeeCode[] = "";
	
	cout << "\nIngrese el codigo del empleado: " << endl;
	cin >> employeeCode;
			
	ifstream archivo;
	archivo.open( "abcEmpleados.bin", ios::out | ios::app | ios::binary );
	
	if( archivo.fail() )
		cout << "Error al abrir el archivo abcEmpleados.bin" << endl;

	ofstream temp;
	temp.open("tempabcEmpleados.bin", ios::out | ios::app | ios::binary);
	
	if( archivo.fail() ) 
		cout << "Error al abrir el archivo tempabcEmpleados.bin" << endl;
		
	while ( !archivo.eof() )
	{
		archivo.read( ( char* ) & mostrar, sizeof( Empleado ) );
		if( !archivo.eof() ) {
			if (strcmp(mostrar.codigo, employeeCode) == 0) {
			} else {
				temp.write( (char * ) & mostrar, sizeof( Empleado ));
			}		
		}
	}
	archivo.close();
	temp.close();
	
	remove ("abcEmpleados.bin" );
	rename( "tempabcEmpleados.bin","abcEmpleados.bin" );
	
	cout << "\n";	
	cout << "Borrado exitosamente";
}

void reporte () {
	Empleado mostrar;
	fstream archivo( "abcEmpleados.bin", ios::in | ios::binary );
	if  (archivo.fail() ) {
		cerr << "Error al abrir abcEmpleados.bin" << endl;
	} else {
		system( "cls" );
		while ( !archivo.eof() ) {
			archivo.read( ( char* ) & mostrar, sizeof( Empleado ));
			if ( !archivo.eof() ) {
				if ( mostrar.edad > 55 ) {
					cout << "\nCodigo: " << mostrar.codigo;
					cout << "\nNombre: " << mostrar.nombre;
					cout << "\nPuesto: " << mostrar.puesto;
					cout << "\nEdad: " << mostrar.edad;
					cout << "\nSueldo: " << mostrar.sueldo;
					cout << "\n";
				}
			}
		}
		cout << "\n";
		cout << "Resporte exitoso";
	}
	archivo.close();
}

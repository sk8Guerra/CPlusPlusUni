#include <iostream.h>
#include <conio.h>

struct fecha
{
   int dia, anio;
   char mes [15];
};

struct producto
{
  char  cod_prd[10], nom_prd[35];
  float precio_prd;
  int cant_exist;
  fecha  fecha_fab, fecha_venc;
};

void llena_resgistro();

int main()
{
  clrscr();
  llena_resgistro();
  getch();
  return  0;
}

void llena_resgistro()
{
    struct producto prod[10];
    for (int p = 0; p<1; p++)
   {
     cout << " Producto # "<< (p+1)<< ":" <<endl;
     cout << "\tCodigo: " ;
     cin >> prod[p].cod_prd;
     cout << "\n\tDescripcion: ";
     cin >> prod[p].nom_prd;
     cout << "\n\tPrecio: ";
     cin >> prod[p].precio_prd;
     cout << "\n\tCantidad en existencia: ";
     cin >> prod[p].cant_exist;
     cout << "\n\tFecha de fabricación: ";
     cout << "\n\t Dia: ";
     cin >> prod[p].fecha_fab.dia;
     cout << "\n\t Mes: ";
     cin >> prod[p].fecha_fab.mes;
     cout << "\n\t Anio: ";
     cin >> prod[p].fecha_fab.anio;
     cout << "\n\tFecha de Vencimiento: ";
     cout << "\n\t Dia: ";
     cin >> prod[p].fecha_venc.dia;
     cout << "\n\t Mes: ";
     cin >> prod[p].fecha_venc.mes;
     cout << "\n\t Anio: ";
     cin >> prod[p].fecha_venc.anio;
   }

   cout << "Reporte de productos ingresados.";


   cout << "\n Codigo   Descripcion   Precio   Existencia   FabDia   FabMes   FabDia   VenDia   VenMes   VenAnio";

    for (int p = 0; p<1; p++)
   {
		cout << "\n" << prod[p].cod_prd << "   " << prod[p].nom_prd << "   "  << prod[p].precio_prd << "   " << prod[p].cant_exist << "   " << prod[p].fecha_fab.dia << "   " << prod[p].fecha_fab.dia
           << "   " << prod[p].fecha_fab.mes << "   " << prod[p].fecha_fab.anio << "   " << prod[p].fecha_venc.dia << "   " << prod[p].fecha_venc.mes << "   " << prod[p].fecha_venc.anio;
   }
}














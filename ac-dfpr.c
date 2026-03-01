#include <stdio.h>
#include <stdlib.h>

struct producto
{
   int codigo;
   char nombre[50];
   int existencia;
   int vendidos;
};

void menu();

int main()
{
   int opcion;

   menu();
   scanf("%d", &opcion);

   return 0;
}

void menu()
{
   printf("-----------------------------------------------\n");
   printf("-----------------MENU PRINCIPAL----------------\n");
   printf("-----------------------------------------------\n");
   printf("1) Capturar inventario inicial\n");
   printf("2) Registrar una venta\n");
   printf("3) Mostrar reporte del dia\n");
   printf("4) Salir\n");
   printf("-----------------------------------------------\n");
   printf("Elige una opcion: ");
}
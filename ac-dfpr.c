#include <stdio.h>
#include <string.h>

#define MAX 10 // constante: 10 productos maximos

// estructura de prodcuto
struct producto
{
   int codigo;
   char nombre[50];
   int existencia;
   int vendidos;
};

struct producto inventario[MAX]; //variable temporal a la extructura.
int totalProductos = 0;

// Buscar producto por código
int buscarProducto(int codigo)
{
   for (int i = 0; i < totalProductos; i++)
   {
      if (inventario[i].codigo == codigo)
      {
         return i;
      }
   }
   return -1;
}

// prototipos
void menu();
void capturarInventario();
void registrarVenta();
void mostrarReporte();
void salir();
void encabezado();

int main()
{
   int opcion;

   encabezado(); // Extra: encabezado para que se imprima una vez

   do //Repita menu hasta que se eliga el 4. salir
   {
      menu();
      if (scanf("%d", &opcion) != 1)
      {
         printf("\n\tPor favor, ingresa un numero valido.\n\n");
         while (getchar() != '\n')
            ;
         continue;
      }

      switch (opcion)
      {
      case 1:
         capturarInventario();
         break;
      case 2:
         registrarVenta();
         break;
      case 3:
         mostrarReporte();
         break;
      case 4:
         salir();
         break;
      default:
         printf("\n\n\t============== OPCION INVALIDA ==============\n\n");
         printf("\tFavor de ingresar una opcion valida (1 a 4).\n\n");
         printf("\t-----------------------------------------------\n\n");
         printf("\tPresione una tecla para volver al menu principal\n\n");
         getchar();
         getchar();
         break;
      }

   } while (opcion != 4);

   return 0;
}

void menu()
{
   printf("\t-----------------------------------------------\n");
   printf("\t-----------------MENU PRINCIPAL----------------\n");
   printf("\t-----------------------------------------------\n");
   printf("\t1) Capturar inventario inicial\n");
   printf("\t2) Registrar una venta\n");
   printf("\t3) Mostrar reporte del dia\n");
   printf("\t4) Salir\n");
   printf("\t-----------------------------------------------\n");
   printf("\tElige una opcion: ");
}

void capturarInventario()
{

   printf("\n\t---- CAPTURA DE IVENTARIO INICIAL ----\n\n");
   printf("\tCuantos productos deseas registrar? (1 a 10): ");
   scanf("%d", &totalProductos);

   // validar si esta dentro de los 10 permitidos
   if (totalProductos < 1 || totalProductos > 10)
   {
      printf("Cantidad invalida\n");
      totalProductos = 0;
      return;
   }

   for (int i = 0; i < totalProductos; i++)
   {
      printf("\nProducto %d\n", i + 1);
      printf("Codigo (entero): ");
      scanf("%d", &inventario[i].codigo);
      printf("Nombre: ");
      scanf(" %[^\n]", inventario[i].nombre);
      printf("Existencia: ");
      scanf("%d", &inventario[i].existencia);

      inventario[i].vendidos = 0;
   }

   printf("\n\nInventario capturado correctamente.\n\n");
}

void registrarVenta()
{
   int cantidadProductos, codigo, cantidad;

   printf("\n\t--- REGISTRAR VENTA ---\n\n");
   printf("Cuantos productos diferentes incluiras en esta venta?: ");
   scanf("%d", &cantidadProductos);

   for (int i = 1; i <= cantidadProductos; i++)
   {
      printf("\nProducto %d\n", i);
      printf("Ingeresa codigo del produto ");
      scanf("%d", &codigo);

      int pos = buscarProducto(codigo);

      if (pos == -1)
      {
         printf("\nERROR:\nEl codigo %d NO existe en el ivenventario.\n\n", codigo);
         printf("Este producto no se registra.\n");
         continue;
      }

      printf("Ingresa cantidad: ");
      scanf("%d", &cantidad);

      if (cantidad > inventario[pos].existencia)
      {
         printf("\nERROR: Existencia insuficiente.\n");
         printf("Existencia actual de %s: %d\n", inventario[pos].nombre, inventario[pos].existencia);
         printf("\n\nEste producto no se registra.\n\n");
         continue;
      }

      inventario[pos].existencia -= cantidad;
      inventario[pos].vendidos += cantidad;

      printf("\nVenta registrada correctamente.\n\n");
   }
}

void mostrarReporte()
{

   printf("\n\t------- REPORTE FINAL DEL DIA -------\n\n");

   int totalVendidos = 0;
   int maxVendidos = -1;
   int indiceMasVendido = -1;

   for (int i = 0; i < totalProductos; i++)
   {
      totalVendidos += inventario[i].vendidos;

      if (inventario[i].vendidos > maxVendidos)
      {
         maxVendidos = inventario[i].vendidos;
         indiceMasVendido = i;
      }
   }

   printf("Total de piezas vendidas: %d\n", totalVendidos);

   if (indiceMasVendido != -1)
   {
      printf("\nProducto mas vendido:\n");
      printf("Codigo: %d\n", inventario[indiceMasVendido].codigo);
      printf("Nombre: %s\n", inventario[indiceMasVendido].nombre);
      printf("Piezas vendidas: %d\n", inventario[indiceMasVendido].vendidos);
   }

   printf("\n---------------------------------------------------\n");
   printf("\t----- INVENTARIO FINAL -----\n");
   printf("---------------------------------------------------\n");
   printf(" COD\tNOMBRE\tEXIST\tVENDIDOS\tALERTA\n");
   printf("---------------------------------------------------\n");

   for (int i = 0; i < totalProductos; i++)
   {
      printf("%d\t%s\t %d\t %d\t",
             inventario[i].codigo,
             inventario[i].nombre,
             inventario[i].existencia,
             inventario[i].vendidos);

      if (inventario[i].existencia <= 2)
      {
         printf("EXISTENCIA BAJA");
      }

      printf("\n");
   }
   printf("---------------------------------------------------\n");
}

void salir()
{
   printf("\n\tGracias por usar el inventario.\n\n");
}

void encabezado()
{
   printf("===============================================================\n");
   printf("\t\tPAPELERIA DEL CAMPUS\n\n");
   printf("\tNombre del Estudiante: Fernando Soberanis\n");
   printf("\tMatricula: ES261100416\n");
   printf("\tGrupo: DS-DFPR-2601-B1-012\n");
}

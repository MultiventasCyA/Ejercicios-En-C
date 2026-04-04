// Reto de Consolidación: Sistema de Inventario de Almacén
// Tienes un almacén de repuestos. Necesitamos monitorear el stock de engranajes y pernos.

#include <stdio.h>

// prototipo
int validarStock(int cantidad);
void reportarEstado(int stockE, int stockP);
void mostrarResumen(int stockE, int stockP);

int main()
{
   int engranajes, pernos, esValido;

   // Validación para Engranajes
   do
   {
      printf("Cantidad de Engranajes: ");
      scanf("%d", &engranajes);
      esValido = validarStock(engranajes);
      if (esValido == 0)
      printf("Error: Cantidad negativa.\n");
   } while (esValido == 0);
   
   // Validación para Pernos (reutilizas la MISMA función)
   do
   {
      printf("Cantidad de Pernos: ");
      scanf("%d", &pernos);
      esValido = validarStock(pernos);
      if (esValido == 0)
         printf("Error: Cantidad negativa.\n");
   } while (esValido == 0);

   reportarEstado(engranajes, pernos);
   mostrarResumen(engranajes, pernos);

   return 0;
}

int validarStock(int cantidad)
{
   if (cantidad < 0)
   {
      return 0;
   }
   return 1;
}

void reportarEstado(int stockE, int stockP)
{
   if (stockE < 10)
   {
      printf("[!] CRÍTICO: Stock de Engranajes bajo (Menos de 10 unidades)\n");
   }
   if (stockP < 10)
   {
      printf("[!] CRÍTICO: Stock de Pernos bajo (Menos de 10 unidades)\n");
   }
   if (stockE >= 10 && stockP >= 10)
   {
      printf("[OK] Niveles de suministro estables\n");
   }
}

void mostrarResumen(int stockE, int stockP)
{
   printf("El total de piezas en almacen es: %d\n", stockE + stockP);
}
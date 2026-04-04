// Caso de Estudio: Control de Estabilidad de una Plataforma
/*Tienes una plataforma nivelada por dos pistones hidráulicos (A y B).
Para que la plataforma no se incline y se rompa, los pistones deben trabajar en armonía.*/

#include <stdio.h>

// prototipos
float psi(float presion);
float diferenciaCarga(float pistonA, float pistonB);
float promedioPresion(float promPres1, float promPres2);
int estado(float estadoOperacion);

int main()
{
   float presionA, presionB, estadoOperacion;

   do
   {
      printf("Ingrese la presion del piston A (numero enteros): ");
      scanf("%f", &presionA);

      printf("Ingrese la presion del piston B (numero enteros): ");
      scanf("%f", &presionB);

      if (psi(presionA) == 0 || psi(presionB) == 0)
      {
         printf("\nPresion fuera de rango, Intente de nuevo.\n\n");
      }

   } while (psi(presionA) == 0 || psi(presionB) == 0);

   estadoOperacion = promedioPresion(presionA, presionB);
   int accion = estado(estadoOperacion);

   if (diferenciaCarga(presionA, presionB) > 15)
   {
      printf("DESBALANCE CRÍTICO");
   }

   if (accion == 1)
   {
      printf("ESTADO: CARGA MAXIMA");
   }
   else if (accion == 2)
   {
      printf("ESTADO: STANDBY (BAJA PRESION)");
   }
   else
   {
      printf("ESTADO: OPERACIÓN NORMAL");
   }

   return 0;
}

float psi(float presion)
{
   return (presion >= 0 && presion <= 5000);
}

float diferenciaCarga(float pistonA, float pistonB)
{
   float diferencia;

   if (pistonA > pistonB)
   {
      diferencia = ((pistonA - pistonB) / 5000) * 100;
   }
   else
   {
      diferencia = ((pistonB - pistonA) / 5000) * 100;
   }

   return diferencia;
}

float promedioPresion(float promPres1, float promPres2)
{
   return (promPres1 + promPres2) / 2;
}

int estado(float estadoOperacion)
{
   if (estadoOperacion > 4000)
   {
      return 1;
   }
   if (estadoOperacion < 500)
   {
      return 2;
   }
   return 0;
}
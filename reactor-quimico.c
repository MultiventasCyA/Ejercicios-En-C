// Caso de Estudio: Monitor de Temperatura con Doble Sensor
/* En un reactor químico, la precisión es vida.
Un solo sensor puede fallar o dar una lectura errónea (ruido).
Por eso, se usan dos sensores para medir la misma zona.*/

#include <stdio.h>

// Prototipos
float obtenerPromedio(float a, float b);            // funcion para obtener promedio
int validarRango(float temp);                       // validando rango de temperatura
float diferenciaTemp(float sensorA, float sensorB); // validando diferencia de temperatura
int analizarEstado(float promedioTemp);             // validando estado de accion

// funcion principal

int main()
{
   float sensorA, sensorB, promedioTemp, diferencia;
   int accion;

   do
   {
      printf("Ingrese la lectura del sensor A: ");
      scanf("%f", &sensorA);

      printf("Ingrese la lectura del sensor B: ");
      scanf("%f", &sensorB);

      if (validarRango(sensorA) == 0 || validarRango(sensorB) == 0)
         printf("ERROR DE HARDWARE, INTENTE DE NUEVO.");

   } while (validarRango(sensorA) == 0 || validarRango(sensorB) == 0);

   promedioTemp = obtenerPromedio(sensorA, sensorB);
   diferencia = diferenciaTemp(sensorA, sensorB);

   if (diferencia > 10)
      printf("[ALERTA] SENSADO INCOHERENTE\n");

   accion = analizarEstado(promedioTemp);
   if (accion == 1)
      printf("ACCION: ENFRIAR");
   else if (accion == 2)
      printf("ACCION: CALENTAR");
   else
      printf("OPERACION NORMAL");

   return 0;
}

// Funciones

int validarRango(float temp) // Una sola función de validación para ambos
{
   return (temp >= -50 && temp <= 150);
}

float obtenerPromedio(float a, float b) // funcion para obtener promedio de los dos sensores
{
   return (a + b) / 2;
}

float diferenciaTemp(float sensorA, float sensorB) // funcion para saber la diferencia de temperatura
{
   float diferencia;

   if (sensorA > sensorB)
   {
      diferencia = sensorA - sensorB;
   }
   else
   {
      diferencia = sensorB - sensorA;
   }

   return diferencia;
}

int analizarEstado(float promedioTemp) // funcion para analizar el estado
{
   if (promedioTemp > 90)
      return 1; //! Enfriar
   if (promedioTemp < 10)
      return 2; //! Calentar
   return 0;    //! Normal
}

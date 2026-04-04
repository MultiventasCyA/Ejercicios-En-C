/*
!Caso de Estudio: El Controlador de Oxígeno de Emergencia
!Estás diseñando el software para un sensor en una base de investigación.
!El sistema debe monitorear el nivel de oxígeno (o2) y actuar según tres variables:
!el porcentaje de oxígeno, la presión atmosférica y el estado del tanque de reserva.
*/

#include <stdio.h>

// !proptotipos
int evaluarAlarma(float o2, float presionAtm);
void controlarValvula(int alarmaSonando, int estadoTanque);

int main()
{

   int estadoTanque, alarmaSonando;
   float o2, presionAtm;

   // !validacion de datos.
   do
   {
      printf("\nIngrese el porcentaje de oxigeno: ");
      scanf("%f", &o2);

      if (o2 < 0 || o2 > 100)
      {
         printf("\nEntrada Invalida, intente de nuevo.\n");
      }

   } while (o2 < 0 || o2 > 100);

   printf("\nIngrese la presion atmosferica: ");
   scanf("%f", &presionAtm);

   printf("\nIngrese el estado del tanque de reserva (0 - 1): ");
   scanf("%d", &estadoTanque);

   // !llama a la funcion Evaluar alarma.
   alarmaSonando = evaluarAlarma(o2, presionAtm);

   if (alarmaSonando == 1)
   {

      printf("Alarma Activa\n");
   }
   else
   {
      printf("\n[OK] Sistema Estable. Oxigeno suficiente.");
   }

   // !llama a la funcion controlar valvula.
   controlarValvula(alarmaSonando, estadoTanque);

   return 0;
}

// !Funcion para evaluar la alarma
int evaluarAlarma(float o2, float presionAtm)
{
   if (o2 < 18.5)
   {
      return 1;
   }
   else if (o2 <= 21.0 && presionAtm < 0.8)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}

// !Funcion para controlar la valvula
void controlarValvula(int alarmaSonando, int estadoTanque)
{
   if (alarmaSonando)
   {
      if (estadoTanque == 1)
      {
         printf("\n[SISTEMA] Valvula de emergencia ABIERTA.");
      }
      else
      {
         printf("\n[CRITICO] Intento de apertura fallido: TANQUE SIN CARGA.");
      }
   }
   // Si alarmaSonando es 0, no hace nada (lo cual es correcto).
}
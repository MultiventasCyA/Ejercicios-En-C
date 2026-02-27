#include <stdio.h>
#include <stdlib.h>

int main()
{

  char nombreCliente[50], tarifa[20];
  float total, costoKwh, consumoKwh;
  int opcion = 0, primeraVez = 1;

  do
  {

    if (primeraVez == 1) // Encabezado que solo se repite la primera vez
    {
      printf("================================\n");
      printf("CALCULO DE TARIFAS ELECTRICAS\n");
      printf("================================\n");
      printf("Estudiante:\tFernando Soberanis Quijano\n");
      printf("Matricula:\tES261100416\n");
      printf("Grupo\t\tDS-DFPR-2601-B1-012\n");
      printf("================================\n\n");

      primeraVez = 0; // se reescribe el valor para que no se repita de nuevo el encabezado y solo el menu
    }

    // menu principal
    printf("Menu de opciones:\n");
    printf("1. Calculo de tarifa electrica\n");
    printf("2. Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    if (opcion == 1)
    {
      // solicitar datos al usuario
      printf("\nIngrese el nombre del cliente: ");
      scanf(" %[^\n]", nombreCliente);
      printf("ingrese el consumo en kwh: ");
      scanf("%f", &consumoKwh);

      // calculo de tarifa
      if (consumoKwh >= 0 && consumoKwh <= 150)
      {
        costoKwh = 2.10;
        sprintf(tarifa, "Reducida");
      }
      else if (consumoKwh <= 300)
      {
        costoKwh = 2.94;
        sprintf(tarifa, "Basica");
      }
      else
      {
        costoKwh = 3.65;
        sprintf(tarifa, "Ato Consumo");
      }

      // mostrar costo por Kwh
      printf(">> Se aplica Tarifa %s de $%.2f por kwh\n", tarifa, costoKwh);

      // total a pagar
      total = consumoKwh * costoKwh;

      // mostrar resumen de factura
      printf("================================\n");
      printf("FACTURA GENERADA\n");
      printf("CLiente: %s\n", nombreCliente);
      printf("Consumo: %.2f kwh\n", consumoKwh);
      printf("Tarifa: %s\n", tarifa);
      printf("Total a pagar: $%.2f\n", total);
      printf("================================\n\n");
    }
    else if (opcion == 2)
    {
      printf("Gracias por usar el sistema\n");
    }
    else
    {
      printf("Opcion no valida, intente de nuevo\n\n");
    }

  } while (opcion != 2);

  return 0;
}

#include <stdio.h>

int main()
{
  float numero1, numero2, numero3;

  printf("Promedio de tres numeros\n");
  printf("Ingrese el primer numero: ");
  scanf("%f", &numero1);
  printf("Ingrese el segundo numero: ");
  scanf("%f", &numero2);
  printf("Ingrese el tercer numero: ");
  scanf("%f", &numero3);

  printf("El promedio de los tres numeros es: %.2f", (numero1 + numero2 + numero3) / 3.0);

  return 0; //no retorna nada
}
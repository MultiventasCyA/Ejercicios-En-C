#include <stdio.h>

int main()
{
  float numero1, numero2, numero3;

  printf("Promedio de tres numeros\n"); //tres numero
  printf("Ingrese el primer numero: "); //numero 1
  scanf("%f", &numero1);
  printf("Ingrese el segundo numero: "); //numero 2
  scanf("%f", &numero2);
  printf("Ingrese el tercer numero: "); //numero3
  scanf("%f", &numero3);

  printf("El promedio de los tres numeros es: %.2gf", (numero1 + numero2 + numero3) / 3.0);

  return 0; //no retorna nada
}
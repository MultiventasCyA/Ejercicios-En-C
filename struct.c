#include <stdio.h>

struct usuario
{
   int edad;
   float peso;
   float altura;
};
void imprimirPerfil(struct usuario u);
float calcularIMC(struct usuario u);

int main()
{
   struct usuario u1;

   printf("Ingrese la edad del usuario: ");
   scanf("%d", &u1.edad);

   printf("Ingrese el peso del usuario: ");
   scanf("%f", &u1.peso);

   printf("Ingrese la altura del usuario (en mts): ");
   scanf("%f", &u1.altura);

   imprimirPerfil(u1);

   float resultado = calcularIMC(u1);
   printf("Su IMC es de: %.1f\n", resultado);

   return 0;
}

void imprimirPerfil(struct usuario u)
{
   printf("El usuario tiene %d edad y pesa %.1f kg\n", u.edad, u.peso);
}

float calcularIMC(struct usuario u)
{
   return u.peso / (u.altura * u.altura);
}
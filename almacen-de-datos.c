// Arreglos de Estructuras (El Almacén de Datos)
/*sistema de un gimnasio y necesitas registrar a 3 personas*/

#include <stdio.h>

struct usuario
{
   int edad;
   float peso;
   float altura;
};

float calcularIMC(struct usuario u);
void encontrarMaximoIMC(struct usuario lista[], int n);

int main()
{
   struct usuario usuarios[3];

   for (int i = 0; i < 3; i++)
   {
      printf("Ingrese la edad del usuario %d: ", i + 1);
      scanf("%d", &usuarios[i].edad);

      printf("Ingrese el peso del usuario %d: ", i + 1);
      scanf("%f", &usuarios[i].peso);

      do
      {
         printf("Ingrese la altura del usuario %d (en mts): ", i + 1);
         scanf("%f", &usuarios[i].altura);

         if (usuarios[i].altura <= 0)
         {
            printf("[!] ERROR: La altura debe ser mayor a 0.\n");
         }
      } while (usuarios[i].altura <= 0);
   }

   printf("\nDatos de los usuarios:\n");

   for (int i = 0; i < 3; i++)
   {
      float imc = calcularIMC(usuarios[i]);
      printf("Usuario %d: Edad: %d, Peso: %.1f kg, Altura: %.2f m, IMC: %.2f\n",
             i + 1, usuarios[i].edad, usuarios[i].peso, usuarios[i].altura, imc);
   }

   encontrarMaximoIMC(usuarios, 3);

   return 0;
}

float calcularIMC(struct usuario u)
{
   return u.peso / (u.altura * u.altura);
}

void encontrarMaximoIMC(struct usuario lista[], int n)
{
   float maxIMC = calcularIMC(lista[0]);
   int indiceMax = 0;

   for (int i = 1; i < n; i++)
   {
      float imcActual = calcularIMC(lista[i]);
      if (imcActual > maxIMC)
      {
         maxIMC = imcActual;
         indiceMax = i;
      }
   }

   printf("\nEl usuario con el IMC más alto es el Usuario %d con un IMC de %.2f\n",
          indiceMax + 1, maxIMC);
}

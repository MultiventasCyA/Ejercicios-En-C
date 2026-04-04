// !programa que pide dos numero enteros y calcula suma, resta, multiplicacion y division.

#include <stdio.h>

int main()
{
    int num1, num2;
    int suma, resta, multiplicacion;
    float division;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    if (num2 != 0)
        division = (float)num1 / num2;
    else
        printf("No se puede dividir entre cero\n");

    division = (float)num1 / num2;

    printf("La suma es: %d\n", suma);
    printf("La resta es: %d\n", resta);
    printf("La multiplicacion es: %d\n", multiplicacion);
    printf("La division es: %.2f\n", division);


    return 0;
}
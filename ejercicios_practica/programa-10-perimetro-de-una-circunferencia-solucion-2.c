/* Programa: Perímetro de una circunferencia (Solución 2) */

#include <conio.h>
#include <stdio.h>

#define PI 3.141592

int main()
{
	float radio;

	printf( "\n   Introduzca radio: " );

	scanf( "%f", &radio );

	printf( "\n   El per%cmetro es: %f", 161, 2 * PI * radio );

	getch(); /* Pausa */

	return 0;
}

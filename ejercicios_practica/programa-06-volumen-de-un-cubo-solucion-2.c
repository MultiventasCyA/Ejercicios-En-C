/* Programa: Volumen de un cubo (Solución 2) */

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
	float arista;

	printf( "\n   Introduzca arista: " );

	scanf( "%f", &arista );

	printf( "\n   El volumen del cubo es: %.2f", pow( arista, 3 ) );

	getch(); /* Pausa */

	return 0;
}

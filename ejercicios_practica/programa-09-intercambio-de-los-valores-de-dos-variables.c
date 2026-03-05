/* Programa: Intercambio de los valores de dos variables */

#include <conio.h>
#include <stdio.h>

int main()
{
	int auxiliar, v1, v2;

	printf( "\n   Introduzca el valor de v1: " );
	scanf( "%d", &v1 );
	printf( "\n   Introduzca el valor de v2: " );
	scanf( "%d", &v2 );

	printf( "\n   Intercambiando los valores..." );

	/* Para hacer el intercambio utilizamos una variable auxiliar */

	auxiliar = v1;
	v1 = v2;
	v2 = auxiliar;

	printf( "\n\n   Ahora, el valor de v1 es: %d", v1 );
	printf( "\n\n   Ahora, el valor de v2 es: %d", v2 );

	getch(); /* Pausa */

	return 0;
}

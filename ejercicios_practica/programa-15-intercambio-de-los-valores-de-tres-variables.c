/* Programa: Intercambio de los valores de tres variables */

#include <conio.h>
#include <stdio.h>

int main()
{
	int auxiliar, v1, v2, v3;

	printf( "\n   Introduzca el valor de v1: " );
	scanf( "%d", &v1);

	printf( "   Introduzca el valor de v2: " );
	scanf( "%d", &v2);

	printf( "   Introduzca el valor de v3: " );
	scanf( "%d", &v3);

	printf( "\n   Intercambiando los valores..." );

	auxiliar = v3;
	v3 = v2;
	v2 = v1;
	v1 = auxiliar;

	printf( "\n\n   Ahora, el valor de v1 es: %d", v1 );
	printf( "\n   Ahora, el valor de v2 es: %d", v2 );
	printf( "\n   Ahora, el valor de v3 es: %d", v3 );

	getch(); /* Pausa */

	return 0;
}

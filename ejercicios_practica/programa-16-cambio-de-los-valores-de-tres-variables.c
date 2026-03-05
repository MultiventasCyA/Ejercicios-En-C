/* Programa: Cambio de los valores de tres variables */

#include <conio.h>
#include <stdio.h>

int main()
{
	int auxiliar, a, b, c;

	printf( "\n   Introduzca el valor de a: " );
	scanf( "%d", &a );

	printf( "   Introduzca el valor de b: " );
	scanf( "%d", &b );

	printf( "   Introduzca el valor de c: " );
	scanf( "%d", &c );

	printf( "\n   Cambiando los valores..." );

	auxiliar = b;
	b = a + c;	
	a = c * 2;
	c = auxiliar * 3;

	printf( "\n\n   Ahora, el valor de a es: %d", a );
	printf( "\n   Ahora, el valor de b es: %d", b );
	printf( "\n   Ahora, el valor de c es: %d", c );

	getch(); /* Pausa */

	return 0;
}

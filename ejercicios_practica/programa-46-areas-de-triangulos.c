/* Programa: Áreas de triángulos */

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
	int contador;
	float altura, base;

	printf( "\n   Introduzca base (real): " );
	scanf( "%f", &base );
	printf( "\n   Introduzca altura (real): " );
	scanf( "%f", &altura );

	contador = 0;

	while ( base != 0 && altura != 0 )
	{
		printf( "\n   El %crea del tri%cngulo es: %f\n", 160, 160, base * altura / 2 );

		contador++;

		printf( "\n   Introduzca base (real): " );
		scanf( "%f", &base );
		printf( "\n   Introduzca altura (real): " );
		scanf( "%f", &altura );
	}

	printf( "\n   Ha calculado el %crea de %d tri%cngulo(s).", 160, contador, 160 );

	getch(); /* Pausa */

	return 0;
}

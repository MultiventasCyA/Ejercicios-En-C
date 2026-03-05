/* Programa: Números pares o impares (Versión 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int numero, pares, impares;

	printf( "\n   Introduzca un n%cmero entero (0=Fin): ", 163 );
	scanf( "%d", &numero );

	pares = 0;
	impares = 0;

	while ( numero != 0 )
	{
		if ( numero % 2 == 0 )
			pares++;
		else
			impares++;

		printf( "\n   Introduzca un n%cmero entero (0=Fin): ", 163 );
		scanf( "%d", &numero );
	}

	printf( "\n   Ha introducido %d n%cmero(s) par(es) y %d impar(es).", pares, 163, impares );

	getch(); /* Pausa */

	return 0;
}

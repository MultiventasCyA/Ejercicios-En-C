/* Programa: Numeros pares o impares (Versión 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int i, numero, pares, impares;

	pares = 0;
	impares = 0;

	for ( i = 1 ; i <= 5 ; i++ )
	{
		printf( "\n   Introduzca n%cmero entero %d: ", 163, i );
		scanf( "%d", &numero );

		if ( numero % 2 == 0 )
			pares++;
		else
			impares++;
	}

	printf( "\n   Ha introducido %d n%cmero(s) par(es) y %d impar(es).", pares, 163, impares );

	getch(); /* Pausa */

	return 0;
}

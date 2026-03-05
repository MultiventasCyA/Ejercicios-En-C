/* Programa: Numeros pares o impares (Versión 3) */

#include <conio.h>
#include <stdio.h>

int main()
{
	char seguir;
	int numero, pares, impares;

	pares = 0;
	impares = 0;

	do
	{
		printf( "\n   Introduzca un n%cmero entero: ", 163 );
		scanf( "%d", &numero );

		if ( numero % 2 == 0 )
			pares++;
		else
			impares++;

		printf( "\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163 );
		fflush( stdin );
		scanf( "%c", &seguir );

	} while ( seguir != 'n' );

	printf( "\n   Ha introducido %d n%cmero(s) par(es) y %d impar(es).", pares, 163, impares );

	getch(); /* Pausa */

	return 0;
}

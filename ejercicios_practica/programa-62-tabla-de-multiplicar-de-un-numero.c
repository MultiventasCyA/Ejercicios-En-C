/* Programa: Tabla de multiplicar de un número */

#include <stdio.h>

int main()
{
	char seguir;
	int i, numero;

	do
	{
		printf( "\n   Introduzca un n%cmero entero: ", 163 );
		scanf( "%d", &numero );

		printf( "\n   La tabla de multiplicar del %d es:\n", numero );

		for ( i = 1 ; i <= 10 ; i++ )
			printf( "\n   %d * %d = %d", i, numero, i * numero );

		printf( "\n\n   %cDesea ver otra tabla (s/n)?: ", 168 );
		fflush( stdin );
		scanf( "%c", &seguir );

	} while ( seguir != 'n' );

	return 0;
}

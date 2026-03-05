/* Programa: Suma de los cuadrados calculados */

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
	char seguir;
	int acumulador, cuadrado, numero;

	acumulador = 0;
	do
	{
		printf( "\n   Introduzca un n%cmero entero: ", 163 );
		scanf( "%d", &numero);

		cuadrado = pow( numero, 2 );
		printf( "\n   %d elevado a 2 es: %d\n", numero, cuadrado );

		acumulador += cuadrado;

		printf( "\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163 );
		fflush( stdin );
		scanf( "%c", &seguir);
	} while ( seguir != 'n' );

	printf( "\n   La suma de los cuadrados calculados es: %d", acumulador );

	getch(); /* Pausa */

	return 0;
}

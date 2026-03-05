/* Programa: Suma de números introducidos */

#include <conio.h>
#include <stdio.h>

int main()
{
	char seguir;
	int acumulador, numero;

	/* En acumulador se va a guardar la suma de los números introducidos por el usuario. */

	acumulador = 0;
	do
	{
		printf( "\n   Introduzca un n%cmero entero: ", 163 );
		scanf( "%d", &numero );

		acumulador += numero;

		printf( "\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163 );
		fflush( stdin );
		scanf( "%c", &seguir );
	} while ( seguir != 'n' );

	/* Mientras que el usuario desee introducir más números, el bucle iterará. */

	printf( "\n   La suma de los n%cmeros introducidos es: %d", 163, acumulador );

	getch(); /* Pausa */

	return 0;
}

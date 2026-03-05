/* Programa: Suma y cantidad de números introducidos (Versión 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	char seguir;
	int acumulador, contador, numero;

	acumulador = 0;
	contador = 0;
	do
	{
		printf( "\n   Introduzca un n%cmero entero: ", 163 );
		scanf( "%d", &numero);

		acumulador += numero;
		contador++;

		printf( "\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163 );
		fflush(stdin);
		scanf( "%c", &seguir);
	} while ( seguir != 'n' );

	printf( "\n   Ha introducido %d n%cmero(s).", contador, 163 );
	printf( "\n\n   La suma de todos ellos es: %d", acumulador );

	getch(); /* Pausa */

	return 0;
}

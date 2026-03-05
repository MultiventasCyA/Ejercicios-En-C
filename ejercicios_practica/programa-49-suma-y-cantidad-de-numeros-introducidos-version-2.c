/* Programa: Suma y cantidad de números introducidos (Versión 2) */

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
		printf( "\n   La suma acumulada es: %d", acumulador );

		contador++;

		printf( "\n\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163 );
		fflush(stdin);
		scanf( "%c", &seguir);
	} while ( seguir != 'n' );

	printf( "\n   Ha introducido %d n%cmero(s).", contador, 163 );

	getch(); /* Pausa */

	return 0;
}

/* Programa: Números pares del 1 al 18 */

#include <conio.h>
#include <stdio.h>

int main()
{
	int numero;

	printf( "\n   " );

	for ( numero = 2 ; numero <= 18 ; numero += 2 )
	{
		printf( "%d ", numero );
	}

	getch(); /* Pausa */

	return 0;
}

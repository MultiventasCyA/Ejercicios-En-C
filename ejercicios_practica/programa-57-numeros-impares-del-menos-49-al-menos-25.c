/* Programa: Números impares del -49 al -25 */

#include <conio.h>
#include <stdio.h>

int main()
{
	int numero;

	printf( "\n   " );

	for ( numero = -49 ; numero <= -25 ; numero += 2 )
	{
		printf( "%d ", numero );
	}

	getch(); /* Pausa */

	return 0;
}

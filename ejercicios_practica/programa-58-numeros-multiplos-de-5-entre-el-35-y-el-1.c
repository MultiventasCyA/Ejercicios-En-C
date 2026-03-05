/* Programa: Números múltiplos de 5 entre el 35 y el 1 */

#include <conio.h>
#include <stdio.h>

int main()
{
	int numero;

	printf( "\n   " );

	for ( numero = 35 ; numero >= 1 ; numero += -5 )
	{
		printf( "%d ", numero );
	}

	getch(); /* Pausa */

	return 0;
}

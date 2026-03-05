/* Programa: Primeras diez potencias de 2 */

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
	int i;

	printf( "\n   " );

	for ( i = 1 ; i <= 10 ; i++ )
	{
		printf( "%.f ", pow( 2, i ) );
	}

	getch(); /* Pausa */

	return 0;
}

/* Programa: Sucesión de números 1 10 100 1000 10000 */

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
	int i;

	printf( "\n   " );

	for ( i = 0 ; i <= 4 ; i++ )
	{
		printf( "%.f ", pow( 10, i ) );
	}

	getch(); /* Pausa */

	return 0;
}

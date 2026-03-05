/* Programa: Número cercano al 1 o al 0 */

#include <conio.h>
#include <stdio.h>

int main()
{
	float numero;

	printf( "\n   Introduzca un n%cmero real: ", 163 );
	scanf( "%f", &numero );

	if ( numero > 0.5 )
		printf( "\n   Est%c m%cs cercano al 1", 160, 160 );
	else

		if ( numero < 0.5 )
			printf( "\n   Est%c m%cs cercano al 0", 160, 160 );
		else
			printf( "\n   Est%c en medio", 160 );

	getch(); /* Pausa */

	return 0;
}

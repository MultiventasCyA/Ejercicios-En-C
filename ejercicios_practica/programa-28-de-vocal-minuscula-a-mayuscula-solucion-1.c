/* Programa: De vocal minúscula a mayúscula (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	char vocal;

	printf( "\n   Introduzca una vocal min%cscula: ", 163 );
	scanf( "%c", &vocal );

	switch ( vocal )
	{
		case 'a' : printf( "\n   A" );
				   break;
		case 'e' : printf( "\n   E" );
				   break;
		case 'i' : printf( "\n   I" );
				   break;
		case 'o' : printf( "\n   O" );
				   break;
		case 'u' : printf( "\n   U" );
				   break;
		default : printf( "\n   ERROR: '%c' no es una vocal min%cscula.", vocal, 163 );
	}

	getch(); /* Pausa */

	return 0;
}

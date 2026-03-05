/* Programa: De número a letras (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int numero;

	printf( "\n   Introduzca un n%cmero entero (1-10): ", 163 );
	scanf( "%d", &numero );

	if ( numero >= 1 && numero <= 10 )

		switch ( numero )
		{
			case  1 : printf( "\n   uno" );
					  break;
			case  2 : printf( "\n   dos" );
					  break;
			case  3 : printf( "\n   tres" );
					  break;
			case  4 : printf( "\n   cuatro" );
					  break;
			case  5 : printf( "\n   cinco" );
					  break;
			case  6 : printf( "\n   seis" );
					  break;
			case  7 : printf( "\n   siete" );
					  break;
			case  8 : printf( "\n   ocho" );
					  break;
			case  9 : printf( "\n   nueve" );
					  break;
			case 10 : printf( "\n   diez" );
		}

	else
		printf( "\n   ERROR: El n%cmero debe ser >= 1 y <= 10.", 163 );

	getch(); /* Pausa */

	return 0;
}

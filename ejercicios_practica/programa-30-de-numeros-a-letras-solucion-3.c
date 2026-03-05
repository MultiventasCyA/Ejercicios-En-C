/* Programa: De número a letras (Solución 3) */

#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int numero;
	char letras[7];

	printf( "\n   Introduzca un n%cmero entero (1-10): ", 163 );
	scanf( "%d", &numero );

	switch ( numero )
	{
		case  1 : strcpy( letras, "uno" );
				  break;
		case  2 : strcpy( letras, "dos" );
				  break;
		case  3 : strcpy( letras, "tres" );
				  break;
		case  4 : strcpy( letras, "cuatro" );
				  break;
		case  5 : strcpy( letras, "cinco" );
				  break;
		case  6 : strcpy( letras, "seis" );
				  break;
		case  7 : strcpy( letras, "siete" );
				  break;
		case  8 : strcpy( letras, "ocho" );
				  break;
		case  9 : strcpy( letras, "nueve" );
				  break;
		case 10 : strcpy( letras, "diez" );
	}

	if ( numero >= 1 && numero <= 10 )
		printf( "\n   %s", letras );
	else
		printf( "\n   ERROR: El n%cmero debe ser >= 1 y <= 10.", 163 );

	getch(); /* Pausa */

	return 0;
}

/* Programa: Distancia de un planeta al Sol (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int numero;

	printf( "\n   Listado de planetas:" );
	printf( "\n\n   1. Mercurio" );
	printf( "\n   2. Venus" );
	printf( "\n   3. Tierra" );
	printf( "\n   4. Marte" );
	printf( "\n   5. J%cpiter", 163 );
	printf( "\n   6. Saturno" );
	printf( "\n   7. Urano" );
	printf( "\n   8. Neptuno" );
	printf( "\n   9. Plut%cn", 162 );
	printf( "\n\n   Introduzca n%cmero de planeta: ", 163 );

	scanf( "%d", &numero );

	switch ( numero )
	{
		case 1 : printf( "\n   Mercurio est%c a 59", 160 );
				 break;
		case 2 : printf( "\n   Venus est%c a 108", 160 );
				 break;
		case 3 : printf( "\n   Tierra est%c a 150", 160 );
				 break;
		case 4 : printf( "\n   Marte est%c a 228", 160 );
				 break;
		case 5 : printf( "\n   J%cpiter est%c a 750", 163, 160 );
				 break;
		case 6 : printf( "\n   Saturno est%c a 1431", 160 );
				 break;
		case 7 : printf( "\n   Urano est%c a 2877", 160 );
				 break;
		case 8 : printf( "\n   Neptuno est%c a 4509", 160 );
				 break;
		case 9 : printf( "\n   Plut%cn est%c a 5916", 162, 160 );
				 break;
		default : printf( "\n   ERROR: %d no est%c asociado a ning%cn planeta.", numero, 160, 163 );
	}

	getch(); /* Pausa */

	return 0;
}

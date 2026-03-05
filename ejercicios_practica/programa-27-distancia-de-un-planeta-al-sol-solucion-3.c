/* Programa: Distancia de un planeta al Sol (Solución 3) */

#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char planeta[9];
	int distancia, numero;

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

	if ( numero >= 1 && numero <= 9 )
	{
		switch ( numero )
		{
			case 1 : strcpy( planeta, "Mercurio" );
					 distancia = 59;
					 break;
			case 2 : strcpy( planeta, "Venus" );
					 distancia = 108;
					 break;
			case 3 : strcpy( planeta, "Tierra" );
					 distancia = 150;
					 break;
			case 4 : strcpy( planeta, "Marte" );
					 distancia = 228;
					 break;
			case 5 : strcpy( planeta, "J\xA3piter" );
					 distancia = 750;
					 break;
			case 6 : strcpy( planeta, "Saturno" );
					 distancia = 1431;
					 break;
			case 7 : strcpy( planeta, "Urano" );
					 distancia = 2877;
					 break;
			case 8 : strcpy( planeta, "Neptuno" );
					 distancia = 4509;
					 break;
			case 9 : strcpy( planeta, "Plut\xA2n" );
					 distancia = 5916;
		}
		printf( "\n   %s est%c a %d", planeta, 160, distancia );
	}
	else
		printf( "\n   ERROR: %d no est%c asociado a ning%cn planeta.", numero, 160, 163 );

	getch(); /* Pausa */

	return 0;
}

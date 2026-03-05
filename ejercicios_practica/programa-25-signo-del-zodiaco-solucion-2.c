/* Programa: Signo del zodíaco (Solución 2) */

#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int numero;
	char categoria[7];

	printf( "\n   Listado de signos del zod%caco:", 161 );
	printf( "\n\n   1. Aries" );
	printf( "\n   2. Tauro" );
	printf( "\n   3. G%cminis", 130 );
	printf( "\n   4. C%cncer", 160 );
	printf( "\n   5. Leo" );
	printf( "\n   6. Virgo" );
	printf( "\n   7. Libra" );
	printf( "\n   8. Escorpio" );
	printf( "\n   9. Sagitario" );
	printf( "\n   10. Capricornio" );
	printf( "\n   11. Acuario" );
	printf( "\n   12. Piscis" );
	printf( "\n\n   Introduzca n%cmero de signo: ", 163 );

	scanf( "%d", &numero );

	switch ( numero % 4 )
	{
		case  1 : strcpy( categoria, "Fuego" );
				  break;
		case  2 : strcpy( categoria, "Tierra" );
				  break;
		case  3 : strcpy( categoria, "Aire" );
				  break;
		case  0 : strcpy( categoria, "Agua" );
	}

	if ( numero >= 1 && numero <= 12 )
		printf( "\n   Es un signo de %s.", categoria );
	else
		printf( "\n   ERROR: %d no est%c asociado a ning%cn signo.", numero, 160, 163 );

	getch(); /* Pausa */

	return 0;
}

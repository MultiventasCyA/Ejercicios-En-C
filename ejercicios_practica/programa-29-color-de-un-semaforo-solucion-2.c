/* Programa: Color de un semáforo (Solución 2) */

#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char color[9], significado[11];
	int numero;

	printf( "\n   Listado de colores de un sem%cforo:", 160 );
	printf( "\n\n   1. Rojo" );
	printf( "\n   2. Verde" );
	printf( "\n   3. Amarillo" );
	printf( "\n\n   Introduzca n%cmero de color: ", 163 );

	scanf( "%d", &numero );

	switch ( numero )
	{
		case 1 : strcpy( color, "Rojo" );
				 strcpy( significado, "No pasar" );
				 break;
		case 2 : strcpy( color, "Verde" );
				 strcpy( significado, "Adelante" );
				 break;
		case 3 : strcpy( color, "Amarillo" );
				 strcpy( significado, "Precauci\xA2n" );
	}

	if ( numero >= 1 && numero <= 3 )
		printf( "\n   %s significa: \"%s\"", color, significado );
	else
		printf( "\n   ERROR: %d no est%c asociado a ning%cn color.", numero, 160, 163 );

	getch(); /* Pausa */

	return 0;
}

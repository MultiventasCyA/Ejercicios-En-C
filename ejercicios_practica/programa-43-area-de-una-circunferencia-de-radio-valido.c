/* Programa: Área de una circunferencia de radio válido */

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
	float radio;

	printf( "\n   Introduzca radio: " );
	scanf( "%f", &radio );

	/* Filtramos el radio */

	while ( radio <= 0 )
	{
		printf( "\n   ERROR: El radio debe ser mayor que cero." );

		printf( "\n\n   Introduzca radio: " );
		scanf( "%f", &radio );
	}

	printf( "\n   El %crea de la circunferencia es: %f", 160, 3.141592 * pow( radio, 2 ) );

	getch(); /* Pausa */

	return 0;
}

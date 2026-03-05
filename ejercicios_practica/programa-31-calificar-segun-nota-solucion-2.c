/* Programa: Calificar según nota (Solución 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
	float nota;

	printf( "\n   Introduzca nota (real): " );
	scanf( "%f", &nota );

	if ( nota < 0 || nota > 10 )
		printf( "\n   ERROR: Nota incorrecta." );
	else

		/* Inicio del anidamiento */
		if ( nota < 5 )
			printf( "\n   NO APTO" );
		else
			printf( "\n   APTO" );
		/* Fin del anidamiento */

	getch(); /* Pausa */

	return 0;
}

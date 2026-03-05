/* Programa: Calificar según nota (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	float nota;

	printf( "\n   Introduzca nota (real): " );
	scanf( "%f", &nota );

	if ( nota >= 5 && nota <= 10 )
		printf( "\n   APTO" );
	else

		/* Inicio del anidamiento */
		if ( nota >= 0 && nota < 5 )
			printf( "\n   NO APTO" );
		else
			printf( "\n   ERROR: Nota incorrecta." );
		/* Fin del anidamiento */

	getch(); /* Pausa */

	return 0;
}

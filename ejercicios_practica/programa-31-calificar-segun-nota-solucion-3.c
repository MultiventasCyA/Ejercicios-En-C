/* Programa: Calificar según nota (Solución 3) */

#include <conio.h>
#include <stdio.h>

int main()
{
	float nota;

	printf( "\n   Introduzca nota (real): " );
	scanf( "%f", &nota );

	if ( nota >= 0 && nota <= 10 )

	/* Inicio del anidamiento */
	if ( nota >= 5 )
		printf( "\n   APTO" );
	else
		printf( "\n   NO APTO" );
	/* Fin del anidamiento */

	else
	printf( "\n   ERROR: Nota incorrecta." );

	getch(); /* Pausa */

	return 0;
}

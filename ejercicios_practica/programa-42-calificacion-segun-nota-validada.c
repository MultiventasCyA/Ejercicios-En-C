/* Programa: Calificación según nota validada */

#include <conio.h>
#include <stdio.h>

int main()
{
	float nota;

	printf( "\n   Introduzca nota (real): " );
	scanf( "%f", &nota );

	/* Si la primera nota introducida por el usuario es correcta, el bucle no itera ninguna vez. */

	while ( nota < 0 || nota > 10 )
	{
		printf( "\n   ERROR: Nota incorrecta, debe ser >= 0 y <= 10\n" );
		printf( "\n   Introduzca nota (real): " );
		scanf( "%f", &nota );
	}

	/* Mientras que el usuario introduzca una nota incorrecta, el bucle iterará. Y cuando introduzca una nota correcta, el bucle finalizará. */

	if ( nota >= 5 )
		printf( "\n   APROBADO" );
	else
		printf( "\n   SUSPENDIDO" );

	getch(); /* Pausa */

	return 0;
}

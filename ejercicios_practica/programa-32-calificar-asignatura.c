/* Programa: Calificar asignatura */

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
		if ( nota >= 9 )
			printf( "\n   SOBRESALIENTE" );
		else
			if ( nota >= 7 )
				printf( "\n   NOTABLE" );
			else
				if ( nota >= 6 )
					printf ( "\n   BIEN" );
				else
					if ( nota >= 5 )
						printf ( "\n   SUFICIENTE" );
					else
						if ( nota >= 3 )
							printf ( "\n   INSUFICIENTE" );
						else
							printf ( "\n   MUY DEFICIENTE" );

	getch(); /* Pausa */

	return 0;
}

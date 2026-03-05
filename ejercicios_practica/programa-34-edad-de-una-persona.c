/* Programa: Edad de una persona */

#include <conio.h>
#include <stdio.h>

int main()
{
	int edad;

	printf( "\n   Introduzca edad: " );
	scanf( "%d", &edad );

	if ( edad >= 0 && edad <= 120 )
		if ( edad < 2 )
			printf( "\n   BEB%c", 144 );
		else
			if ( edad < 13 )
				printf( "\n   NI%cO", 165 );
			else
				if ( edad < 18 )
					printf( "\n   ADOLESCENTE" );
				else
					if ( edad < 31 )
						printf( "\n   JOVEN");
					else
						if ( edad < 75 )
							printf( "\n   ADULTO" );
						else
							printf( "\n   ANCIANO" );
	else
		printf( "\n   ERROR: Edad incorrecta." );

	getch(); /* Pausa */

	return 0;
}

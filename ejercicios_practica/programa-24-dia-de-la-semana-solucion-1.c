/* Programa: Día de la semana (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int dia;

	printf( "\n   Introduzca d%ca de la semana: ", 161 );
	scanf( "%d", &dia );

	switch ( dia )
	{
		case 1 : printf( "\n   Lunes" );
				 break;
		case 2 : printf( "\n   Martes" );
				 break;
		case 3 : printf( "\n   Mi%crcoles", 130 );
				 break;
		case 4 : printf( "\n   Jueves" );
				 break;
		case 5 : printf( "\n   Viernes" );
				 break;
		case 6 : printf( "\n   S%cbado", 160 );
				 break;
		case 7 : printf( "\n   Domingo" );
				 break;
		default : printf( "\n   ERROR: D%ca incorrecto.", 161 );
	}

	getch(); /* Pausa */

	return 0;
}

/* Programa: Mes del año (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int mes;

	printf( "\n   Introduzca mes del a%co: ", 164 );
	scanf( "%d", &mes );

	switch ( mes )
	{
		case  1 : printf( "\n   Enero" );
				  break;
		case  2 : printf( "\n   Febrero" );
				  break;
		case  3 : printf( "\n   Marzo" );
				  break;
		case  4 : printf( "\n   Abril" );
				  break;
		case  5 : printf( "\n   Mayo" );
				  break;
		case  6 : printf( "\n   Junio" );
				  break;
		case  7 : printf( "\n   Julio" );
				  break;
		case  8 : printf( "\n   Agosto" );
				  break;
		case  9 : printf( "\n   Septiembre" );
				  break;
		case 10 : printf( "\n   Octubre" );
				  break;
		case 11 : printf( "\n   Noviembre" );
				  break;
		case 12 : printf( "\n   Diciembre" );
				  break;
		default : printf( "\n   ERROR: Mes incorrecto." );
	}

	getch(); /* Pausa */

	return 0;
}

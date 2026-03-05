/* Programa: Validar fecha (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int dia, mes, anio;

	printf( "\n   Introduzca d%ca: ", 161 );
	scanf( "%d", &dia );
	printf( "\n   Introduzca mes: " );
	scanf( "%d", &mes );
	printf( "\n   Introduzca a%co: ", 164 );
	scanf( "%d", &anio );

	if ( mes >= 1 && mes <= 12 )
	{
		switch ( mes )
		{
			case  1 :
			case  3 :
			case  5 :
			case  7 :
			case  8 :
			case 10 :
			case 12 : if ( dia >= 1 && dia <= 31 )
						  printf( "\n   FECHA CORRECTA" );
					  else
						  printf( "\n   FECHA INCORRECTA" );
					  break;

			case  4 :
			case  6 :
			case  9 :
			case 11 : if ( dia >= 1 && dia <= 30 )
						  printf( "\n   FECHA CORRECTA" );
					  else
						  printf( "\n   FECHA INCORRECTA" );
					  break;

			case  2 : if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
						  if ( dia >= 1 && dia <= 29 )
							  printf( "\n   FECHA CORRECTA" );
						  else
							  printf( "\n   FECHA INCORRECTA" );
					  else
						  if ( dia >= 1 && dia <= 28 )
							  printf( "\n   FECHA CORRECTA" );
					  	  else
							  printf( "\n   FECHA INCORRECTA" );
		}
	}
	else
		printf( "\n   FECHA INCORRECTA" );

	getch(); /* Pausa */

	return 0;
}

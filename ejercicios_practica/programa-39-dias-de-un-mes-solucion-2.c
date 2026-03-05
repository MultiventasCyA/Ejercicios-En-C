/* Programa: Días de un mes (Solución 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int anio, mes;

	printf( "\n   Introduzca a%co: ", 164 );
	scanf( "%d", &anio );
	printf( "\n   Introduzca mes: " );
	scanf( "%d", &mes );

	if ( mes >= 1 && mes <= 12 )

	/* Inicio del anidamiento 1 */
	switch ( mes )
	{
		case  1 :
		case  3 :
		case  5 :
		case  7 :
		case  8 :
		case 10 :
		case 12 : printf( "\n   31 d%cas", 161 );
				  break;

		case  4 :
		case  6 :
		case  9 :
		case 11 : printf( "\n   30 d%cas", 161 );
				  break;

		case  2 : /* Inicio del anidamiento 2 */

				  if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
					  printf( "\n   29 d%cas", 161 );
				  else
					  printf( "\n   28 d%cas", 161 );

				  /* Fin del anidamiento 2 */
	}
	/* Fin del anidamiento 1 */

	else
		printf( "\n   ERROR: Mes incorrecto." );

	getch(); /* Pausa */

	return 0;
}

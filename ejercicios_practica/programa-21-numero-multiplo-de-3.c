/* Programa: Número múltiplo de 3 */

#include <conio.h>
#include <stdio.h>

int main()
{
	int numero;

	printf( "\n   Introduzca un n%cmero entero: ", 163 );
	scanf( "%d", &numero );

	if ( numero % 3 == 0 )
		printf( "\n   ES M%cLTIPLO DE 3", 233 );
	else
		printf( "\n   NO ES M%cLTIPLO DE 3", 233 );

	getch(); /* Pausa */

	return 0;
}

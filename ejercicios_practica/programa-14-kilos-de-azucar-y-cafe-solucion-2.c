/* Programa: Kilos de azúcar y café (Solución 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
	float cantidad;

	printf( "\n   Introduzca cantidad: " );
	scanf( "%f", &cantidad );

	printf( "\n   %.2f kilos de az%ccar", cantidad / 2 / .4, 163 );

	printf( "\n\n   %.2f kilos de caf%c", cantidad / 3 / .13, 130 );

	printf( "\n\n   Quedan %.2f euros", cantidad / 6 );

	getch(); /* Pausa */

	return 0;
}

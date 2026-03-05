/* Programa: De pesetas a euros (Solución 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int pesetas;

	printf( "\n   Introduzca cantidad en pesetas: " );

	scanf( "%d", &pesetas );

	printf( "\n   Equivalen a: %.2f euros", pesetas / 166.386 );

	getch(); /* Pausa */

	return 0;
}

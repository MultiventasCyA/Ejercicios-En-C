/* Programa: De pesetas a euros (Solución 1) */

#include <conio.h>
#include <stdio.h>

#define EURO 166.386

int main()
{
	int pesetas;

	float euros;

	printf( "\n   Introduzca cantidad en pesetas: " );

	scanf( "%d", &pesetas );

	euros = pesetas / EURO;

	printf( "\n   Equivalen a: %.2f euros", euros );

	getch(); /* Pausa */

	return 0;
}

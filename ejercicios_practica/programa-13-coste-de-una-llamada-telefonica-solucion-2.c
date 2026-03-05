/* Programa: Coste de una llamada telefónica (Solución 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int duracion;

	printf( "\n   Introduzca duraci%cn de la llamada: ", 162 );
	scanf( "%d", &duracion );

	printf( "\n   El coste de la llamada telef%cnica es: %.2f euros", 162, duracion * .25 + .49 );

	getch(); /* Pausa */

	return 0;
}

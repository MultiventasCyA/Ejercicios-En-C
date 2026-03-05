/* Programa: Coste de una llamada telefónica (Solución 1) */

#include <conio.h>
#include <stdio.h>

#define ESTABLECIMIENTO 49
#define MINUTO 25

int main()
{
	int duracion;
	float coste;

	printf( "\n   Introduzca duraci%cn de la llamada: ", 162 );

	scanf( "%d", &duracion );

	coste = ( float ) ( duracion * MINUTO + ESTABLECIMIENTO ) / 100;

	printf( "\n   El coste de la llamada telef%cnica es: %.2f euros", 162, coste );

	getch(); /* Pausa */

	return 0;
}

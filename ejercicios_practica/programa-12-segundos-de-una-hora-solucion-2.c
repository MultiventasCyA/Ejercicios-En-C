/* Programa: Segundos de una hora (Solución 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int h, m, s;

	printf( "\n   Introduzca horas: " );
	scanf( "%d", &h );

	printf( "\n   Introduzca minutos: " );
	scanf( "%d", &m );

	printf( "\n   Introduzca segundos: " );
	scanf( "%d", &s );

	printf( "\n   Desde las 0:0:0 horas han pasado %d segundos.", h * 3600 + m * 60 + s );

	getch(); /* Pausa */

	return 0;
}

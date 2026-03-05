/* Programa: Segundos de una hora (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int horas, minutos, segundos, total;

	printf( "\n   Introduzca horas: " );
	scanf( "%d", &horas );

	printf( "\n   Introduzca minutos: " );
	scanf( "%d", &minutos );

	printf( "\n   Introduzca segundos: " );
	scanf( "%d", &segundos );

	total = horas * 3600 + minutos * 60 + segundos;

	printf( "\n   Desde las 0:0:0 horas han pasado %d segundos.", total );

	getch(); /* Pausa */

	return 0;
}

/* Programa: Saludo */

#include <conio.h>
#include <stdio.h>

int main()
{
	char nombre[20];

	printf( "\n   Introduzca su nombre: " );

	scanf( "%s", nombre );

	printf( "\n   Hola %s, buenos d%cas.", nombre, 161 );

	getch(); /* Pausa */

	return 0;
}

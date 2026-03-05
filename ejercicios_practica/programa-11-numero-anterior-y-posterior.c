/* Programa: Número anterior y posterior */

#include <conio.h>
#include <stdio.h>

int main()
{
	int numero;

	printf( "\n   Introduzca un n%cmero entero: ", 163 );

	scanf( "%d", &numero );

	printf( "\n   El n%cmero anterior es: %d", 163, numero - 1 );

	printf( "\n\n   El n%cmero posterior es: %d", 163, numero + 1 );

	getch(); /* Pausa */

	return 0;
}

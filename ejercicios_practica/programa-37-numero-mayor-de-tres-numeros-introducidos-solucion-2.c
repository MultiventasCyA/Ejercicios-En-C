/* Programa: Número mayor de tres números introducidos (Solución 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int numero, mayor;

	printf( "\n   Introduzca el primer n%cmero: ", 163 );
	scanf( "%d", &mayor );
	printf( "\n   Introduzca el segundo n%cmero: ", 163 );
	scanf( "%d", &numero );

	if ( numero > mayor )
		mayor = numero;

	printf( "\n   Introduzca el tercer n%cmero: ", 163 );
	scanf( "%d", &numero );

	if ( numero > mayor )
		mayor = numero;

	printf( "\n   %d es el mayor.", mayor );

	getch(); /* Pausa */

	return 0;
}

/* Programa: ¿Cuánto suman dos números? (Solución 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int n1, n2, suma;

	printf( "\n   Introduzca un n%cmero entero: ", 163 );
	scanf( "%d", &n1 );

	printf( "\n   Introduzca otro n%cmero entero: ", 163 );
	scanf( "%d", &n2 );

	printf( "\n   %cCu%cnto suman?: ", 168, 160 );
	scanf( "%d", &suma );

	if ( suma == n1 + n2 )
		printf( "\n   CORRECTO" );
	else
		printf( "\n   INCORRECTO: La suma es %d", n1 + n2 );

	getch(); /* Pausa */

	return 0;
}

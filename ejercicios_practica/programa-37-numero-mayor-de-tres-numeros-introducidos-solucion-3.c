/* Programa: Número mayor de tres números introducidos (Solución 3) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int n1, n2, n3, mayor;

	printf( "\n   Introduzca el primer n%cmero: ", 163 );
	scanf( "%d", &n1 );
	printf( "\n   Introduzca el segundo n%cmero: ", 163 );
	scanf( "%d", &n2 );
	printf( "\n   Introduzca el tercer n%cmero: ", 163 );
	scanf( "%d", &n3 );

	if ( n1 > n2 )

		if ( n1 > n3 )
			mayor = n1;
		else
			mayor = n3;

	else

		if ( n2 > n3 )
			mayor = n2;
		else
			mayor = n3;

	printf( "\n   %d es el mayor.", mayor );

	getch(); /* Pausa */

	return 0;
}

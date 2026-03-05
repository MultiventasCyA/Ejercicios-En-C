/* Programa: La mitad de un número */

#include <conio.h>
#include <stdio.h>

int main()
{
	int contador;
	float numero;

	printf( "\n   Introduzca un n%cmero real (0=Fin): ", 163 );
	scanf( "%f", &numero );

	contador = 0; /* Inicialización del contador */

	while ( numero != 0 )
	{
		printf( "\n   La mitad de %f es: %f\n", numero, numero / 2 );

		contador++; /* Incremento*/

		printf( "\n   Introduzca un n%cmero real (0=Fin): ", 163 );
		scanf( "%f", &numero );
	}

	printf( "\n   Ha introducido %d n%cmero(s) distinto(s) de cero.", contador, 163 );

	getch(); /* Pausa */

	return 0;
}

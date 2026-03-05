/* Programa: Primeros diez números naturales (Solución 3) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int contador;

	printf( "\n   " );

	contador = 1; /* Inicialización del contador */
	while ( contador <= 10 ) /* Condición */
	{
		printf( "%d ", contador ); /* Salida */
		contador++; /* Incremento del contador */
	}

	getch(); /* Pausa */

	return 0;
}

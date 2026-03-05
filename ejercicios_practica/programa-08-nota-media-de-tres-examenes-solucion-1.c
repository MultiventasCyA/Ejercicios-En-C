/* Programa: Nota media de tres exámenes (Solución 1) */

#include <conio.h>
#include <stdio.h>

int main()
{
	float nota1, nota2, nota3, media;

	printf( "\n   Introduzca nota del primer examen: " );

	scanf( "%f", &nota1 );

	printf( "\n   Introduzca nota del segundo examen: " );

	scanf( "%f", &nota2 );

	printf( "\n   Introduzca nota del tercer examen: " );

	scanf( "%f", &nota3 );

	media = ( nota1 + nota2 + nota3 ) / 3;

	printf( "\n   La nota media es: %.2f", media );

	getch(); /* Pausa */

	return 0;
}

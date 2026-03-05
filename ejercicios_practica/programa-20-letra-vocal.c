/* Programa: Letra vocal */

#include <conio.h>
#include <stdio.h>

int main()
{
	char letra;

	printf( "\n   Introduzca una letra: " );
	scanf( "%c", &letra );

	if ( letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'a' || letra == 'U' )
		printf( "\n   ES UNA VOCAL" );
	else
		printf( "\n   NO ES UNA VOCAL" );

	getch(); /* Pausa */

	return 0;
}

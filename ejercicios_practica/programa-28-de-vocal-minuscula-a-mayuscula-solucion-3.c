/* Programa: De vocal minúscula a mayúscula (Solución 3) */

#include <conio.h>
#include <stdio.h>

int main()
{
	char mayuscula, vocal;

	printf( "\n   Introduzca una vocal min%cscula: ", 163 );
	scanf( "%c", &vocal );

	if ( vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u' )
	{
		switch ( vocal )
		{
			case 'a' : mayuscula = 'A';
					   break;
			case 'e' : mayuscula = 'E';
					   break;
			case 'i' : mayuscula = 'I';
					   break;
			case 'o' : mayuscula = 'O';
					   break;
			case 'u' : mayuscula = 'U';
		}
		printf( "\n   %c", mayuscula );
	}
	else
		printf( "\n   ERROR: '%c' no es una vocal min%cscula.", vocal, 163 );

	getch(); /* Pausa */

	return 0;
}

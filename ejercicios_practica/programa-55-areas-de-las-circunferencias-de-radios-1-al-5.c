/* Programa: Áreas de las circunferencias de radios 1 al 5 */

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
	int radio;

	for ( radio = 1 ; radio <= 5 ; radio++ )
	{
		printf( "\n   %crea de la circunferencia de radio %d: %f", 181, radio, 3.141592 * pow( radio, 2 ) );
	}

	getch(); /* Pausa */

	return 0;
}

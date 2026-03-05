/* Programa: Área de una circunferencia (Solución 2) */

#include <conio.h>
#include <math.h>
#include <stdio.h>

#define PI 3.141592

int main()
{
	float area, radio;

	printf( "\n   Introduzca radio: " );

	scanf( "%f", &radio );

	area = PI * pow( radio, 2 );

	printf( "\n   El %crea de la circunferencia es: %.2f", 160, area );

	printf( "\n\n   Pulse una tecla para salir..." );

	getch(); /* Pausa */

	return 0;
}

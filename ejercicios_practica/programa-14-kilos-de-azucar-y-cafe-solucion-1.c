/* Programa: Kilos de azúcar y café (Solución 1) */

#include <conio.h>
#include <stdio.h>

#define coste_azucar .4
#define coste_cafe .13

int main()
{
	float cantidad, kilos_azucar, kilos_cafe;

	printf( "\n   Introduzca cantidad: " );
	scanf( "%f", &cantidad );

	kilos_azucar = cantidad / 2 / coste_azucar;
	kilos_cafe = cantidad / 3 / coste_cafe;
	cantidad = cantidad / 6;

	printf( "\n   %.2f kilos de az%ccar", kilos_azucar, 163 );

	printf( "\n\n   %.2f kilos de caf%c", kilos_cafe, 130 );

	printf( "\n\n   Quedan %.2f euros", cantidad );

	getch(); /* Pausa */

	return 0;
}

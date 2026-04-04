#include <stdio.h>

#define EURO_LIBRA 0.865
#define EURO_DOLAR 1.286

int main(void) {

	int euros;
	float libras, dolares;

//Se solicita la cantidad a convertir (valor entero)
	printf ("Introduzca los euros que quiere convertir: ");
	scanf("%d", &euros);

//Se realizan las conversiones.
	dolares = euros * EURO_DOLAR;
	libras = euros * EURO_LIBRA;

	/*Se muestran los resultados. Para facilitar la lectura solo se
	muestran 3 decimales "%.3f" */
	printf ("%d euros son:\n", euros);
	printf ("%.3f dolares \n", dolares);
	printf ("%.3f libras\n", libras);

	return (0);
}

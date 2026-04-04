#include <stdio.h>

int main(void) {
	int edad, adulto;
	
	printf ("\nQue edad tiene?\n");
	scanf ("%i",&edad);
	
	/* Almacenamos en adulto el resultado de evaluar edad>=21. Si
	la relación es cierta, adulto tomará valor 1. En caso contrario
	tomará valor 0. */
	adulto = (edad >= 18);
	
	/* Se muestra por pantalla el valor almacenado en adulto*/
	printf("%d \n", adulto);
	
	return (0);
}



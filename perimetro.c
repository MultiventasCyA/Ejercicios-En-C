#include <stdio.h>

#define PI 3.14 //constante de PI

int main() {

	float radio, perimetro;

	do {
		printf("ingrese el radio para calcular el perimetro de una circunferencia: ");
		if(scanf("%f", &radio) != 1) {
			printf("ERROR: Ingrese un numero valido:\n");
			while (getchar() != '\n');  //limpiar buffer
			radio = 0;  // forzar repeticion
		} else if(radio < 1) {
			printf("ERROR: ingrese un numero mayor a 0.\n");
		}
	} while(radio < 1);

	perimetro = 2 * PI * radio;

	printf("El perimetro de la circunferencia es: %.2f", perimetro);

	return 0;
}



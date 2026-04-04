#include <stdio.h>

int main() {
	float capital = 0, interes = 0, resultado = 0;

	do {
		printf("Ingresa el capital incial: ");

		if(scanf("%f", &capital)!= 1) {
			printf("ERROR: Ingrese un numero.\n");
			while (getchar() != '\n');  // limpiar buffer
			capital = 0;  //forzar repeticion
		} else if(capital <= 0) {
			printf("ERROR:  El numero debe ser mayor 0.\n");
		}

	} while(capital <= 0);

	do {
		printf("ingrese el tipo de interes: ");

		if(scanf("%f", &interes) != 1) {
			printf("ERROR: Ingrese un numero.\n");
			while (getchar() != '\n');  //limpiar buffer
			interes = 0;  // forzar repeticion

		} else if(interes <= 0) {
			printf("ERROR: Ingrese un numero mayor a 0.\n");
		}
	} while(interes <= 0);

	interes = interes / 100;

	resultado = capital * interes;

	printf("El interes total a pagar es de %.2f", resultado);

	return 0;
}


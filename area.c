#include <stdio.h>

int main() {
	float altura = 0, base = 0, area = 0;
	int primeraVez = 1;

	while(primeraVez) {
		printf("********** Calculo del area de un Triangulo Rectangulo ********\n");
		printf("***************************************************************\n");
		primeraVez = 0;
	}

	do {
		printf("Ingrese la base: ");
		if(scanf("%f", &base) != 1) {
			printf("ERROR: Ingrese un numero valido.\n");
			while (getchar() != '\n');  //limpiar buffer
			base = 0;  // forzar repeticion
		} else if(base <1) {
			printf("ERROR: ingrese un valor mayor a 0.\n");
		}
	} while(base <1);

	do {
		printf("Ingrese la altura: ");
		if(scanf("%f", &altura) != 1) {
			printf("ERROR: Ingrese un numero valido.\n");
			while (getchar() != '\n');  //limpiar buffer
			altura = 0;  // forzar repeticion
		} else if(base <1) {
			printf("ERROR: ingrese un valor mayor a 0.\n");
		}
	} while(altura <1);

	area = (base * altura) / 2; //operacion para sacar el area

	printf("UnTriangulo Rectabgulo tiene de altura %.2f y base %.2f, tiene un area de %.2f", altura, base, area);

	return 0;
}


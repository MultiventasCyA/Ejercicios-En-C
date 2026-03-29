#include <stdio.h>
#include <stdlib.h>

// Prototipo de la función para mostrar el menú
void mostrarMenu();

int main()
{

	int opcion, primeraVez = 1, contHamb = 0, contPapas = 0, contRefresco = 0, contPaletas = 0, contBrownies = 0;
	float total = 0;

	do
	{

		if (primeraVez == 1)
		{
			mostrarMenu();
			primeraVez = 0;
		}

		printf("\nSeleccione un Producto: ");
		scanf("%d", &opcion);

		switch (opcion)
		{

		case 1:
			total += 100;
			contHamb++;
			printf("Se agrego Hamburguesa.\n");
			break;
		case 2:
			total += 50;
			contPapas++;
			printf("Se agrego Papas fritas.\n");
			break;
		case 3:
			total += 30;
			contRefresco++;
			printf("Se agrego refresco.\n");
			break;
		case 4:
			total += 5;
			contPaletas++;
			printf("Se agrego Paleta.\n");
			break;
		case 5:
			total += 20;
			contBrownies++;
			printf("Se agrego Brownie.\n");
			break;
		case 0:
			printf("\n--- Generando Cuenta. ---\n");
			break;
		default:
			printf("\nOpcion no valida. Intente de Nuevo.\n");
		}

	} while (opcion != 0);

	printf("\n--- Total a pagar es de: %.2f ---\n", total);
	printf("\nSe vendio:\n\t- %d Hamburguesas\n\t- %d Papas Fritas\n\t- %d Refrescos\n\t- %d Paletas\n\t- %d Brownies", contHamb, contPapas, contRefresco, contPaletas, contBrownies);

	return 0;
}

void mostrarMenu()
{
	printf("---  Menu ---\n");
	printf("1. Hamburguesa ($100)\n");
	printf("2. Papas Fritas ($50)\n");
	printf("3. Refresco ($30)\n");
	printf("4. Paletas ($5)\n");
	printf("5. Brownies ($20)\n");
	printf("0. Obtener cuenta y salir\n");
}

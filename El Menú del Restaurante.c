#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int opcion, primeraVez = 1, contHamb = 0, contPapas = 0, contRefresco = 0;
	float total = 0;
	
	do{
		
		if(primeraVez == 1){
			printf("---  Menu ---\n");
			printf("1. Hamburguesa ($100)\n");
			printf("2. Papas Fritas ($50)\n");
			printf("3. Refresco ($30)\n");
			printf("4. Cerrar cuenta y salir\n");
			primeraVez = 0;
		}
		
		
		printf("Seleccion una opcion: ");
		scanf("%d", &opcion);
		
			switch(opcion){
			
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
							printf("Generando Cuenta.\n");
							break;							
				default:
							printf("Opcion no valida.\n");
			}
							
	}while (opcion != 4);
	
	printf("Totala a pagar es: %.2f\n", total);
	printf("Se vendio %d Hamburguesas\n\t- %d Papas Fritas\n\t- %d Refrescos.",  contHamb, contPapas, contRefresco);
	
	
	return 0;
}

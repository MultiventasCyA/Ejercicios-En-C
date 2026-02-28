#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, numero, contadorPar = 0, contadorImpar=0, hayMayorCien = 0; 
	
		for (i=1;i<=10;i++){
			printf("Ingresa un numero: ");
			scanf("%d", &numero);	
			
			if(numero % 2 == 0){
				printf("El numero %d es par\n", numero);
					contadorPar++;
				
			}else {
				printf("El numero es Impar.\n");
				contadorImpar++;
			}
			
			if (numero > 100){
				hayMayorCien = 1;
			}
		}
		
		printf("El numero total de pares es de: %d y el numero total de impares es de %d\n",contadorPar,contadorImpar);
		if(hayMayorCien ==1){
			printf("Si se ingreso un numero mayor a 100");
		}	else{
			printf("No se ingreso ningun numero mayor a cien");		}
	
	
	return 0;
}

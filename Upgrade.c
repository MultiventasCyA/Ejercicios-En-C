#include <stdio.h>
#include <stdlib.h>
//Upgrade

int main(){
	
	int numero, sumaTotal = 0;
	
	do{
		printf("Ingrese un numero:");
		scanf("%d", &numero);
		
		sumaTotal = sumaTotal + numero;
		
		
	}while(numero != 0);
	
	printf("La suma total es de: %d", sumaTotal);
	return 0;
}

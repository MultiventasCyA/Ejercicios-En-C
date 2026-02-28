#include <stdio.h>
#include <stdlib.h>
//El centinela

int main(){
	
	int numero, sumaTotal = 0;
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	while(numero != 0){
		sumaTotal = sumaTotal + numero;
		
		printf("Ingrese un numero:");
		scanf("%d", &numero);
	}
	
	printf("La suma total de los numero es: %d", sumaTotal);
	
	
	return 0;
}

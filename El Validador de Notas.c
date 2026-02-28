#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, nota, sumaTotal = 0, contadorAprobado = 0, contadorReprobado = 0, notaMaxima = -1;
	float  promedio;
	
	
	for(i = 1;i <= 6;i++){
		
		do{
			printf("ingrese la nota del alumno %d: ", i);
			scanf("%d", &nota);
			if(nota < 0 || nota > 10){
				printf("Nota unvalida:\n");
				
			}			
			
		}while(nota < 0 || nota > 10); //mientas sea del 0 al 10 continua
		
		//nota mas alta
		if(nota > notaMaxima){
			notaMaxima = nota;
		}
		
		//sumar todas las notas ingresadas
		sumaTotal += nota;
		
		//contar aporbado y reprobados
		if(nota >= 5){
			contadorAprobado++;
		}	else{
			contadorReprobado++;
		}
		
				
	}
	promedio = (float)sumaTotal/6;
	printf("El promedio de la clase es: %.2f\n", promedio);
	
	printf("Hubieron %d Aprobados\n", contadorAprobado);
	printf("hubieron %d Reprobados\n", contadorReprobado);
	
	printf("La nota Maxima fue de %d", notaMaxima);


	return 0;	
}

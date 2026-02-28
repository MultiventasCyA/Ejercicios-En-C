#include <stdio.h>
#include <stdlib.h>

int  main()
{
	int i, numero, sumaTotal = 0;
	
	printf("Ingrese un numero para generar Tabla: ");
	scanf("%d", &numero);
	
	for(i = 1;i <= 10;i++){
		printf("%d x %d = %d\n",numero, i,numero * i);
		sumaTotal = sumaTotal + (numero * i);
	}
		printf("La suma total de los resultados es: %d", sumaTotal);
	
	
	return 0;
}


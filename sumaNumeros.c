#include <stdio.h>

int main()
{
	int a,i, suma=0;

	do
	{
		for(i = 1; i <= 3; i++)
		{
			printf("Introduzca numero: ");
			scanf("%d", &a);
			suma += a;
		}

	}
	while(i <= 3);

	printf("La suma total es de %d", suma);

	return 0;
}


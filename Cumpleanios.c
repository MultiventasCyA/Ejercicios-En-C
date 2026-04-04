#include <stdio.h>

int main()
{
	int fecha = 0;

	printf("Hola, Por favor introduzca su anio de nacimiento: ");
	scanf("%d", &fecha);

	printf("Si usted nacio en %d, este anio cumple %d.",fecha, (2026 - fecha));

	return 0;
}


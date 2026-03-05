/* Programa: Nombre y apellidos de una persona */

#include <stdio.h>
#include <string.h>

#define APELLIDO "Rivas"

int main()
{
	char apellidos[20], nombre[10] = "Carlos", persona[29];

	strcpy( apellidos, "Pes" );

	strcat( apellidos, APELLIDO );

	strcpy( persona, nombre );

	strcat( persona, apellidos );

	printf( "%s", persona );

	getch(); /* Pausa */

	return 0;
}

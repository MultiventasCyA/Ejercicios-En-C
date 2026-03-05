/* Programa: Primeros diez números naturales (Solución 2) */

#include <conio.h>
#include <stdio.h>

int main()
{
	int numero;

	numero = 1;
	printf( "\n   %d ", numero ); /* Escribe el 1 */
	numero++;
	printf( "%d ", numero ); /* Escribe el 2 */
	numero++;
	printf( "%d ", numero ); /* Escribe el 3 */
	numero++;
	printf( "%d ", numero ); /* Escribe el 4 */
	numero++;
	printf( "%d ", numero ); /* Escribe el 5 */
	numero++;
	printf( "%d ", numero ); /* Escribe el 6 */
	numero++;
	printf( "%d ", numero ); /* Escribe el 7 */
	numero++;
	printf( "%d ", numero ); /* Escribe el 8 */
	numero++;
	printf( "%d ", numero ); /* Escribe el 9 */
	numero++;
	printf( "%d", numero );  /* Escribe el 10 */

	getch(); /* Pausa */

	return 0;
}

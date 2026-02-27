/**
 * @file template.c
 * @brief Estructura base para proyectos de ingeniería en C
 * * ANÁLISIS TÉCNICO:
 * - stdio.h: Permite la comunicación con el hardware (Teclado/Pantalla).
 * - stdlib.h: Necesaria para gestión de memoria y control del sistema.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1. DECLARACIÓN: Reserva de espacio en la RAM
    // Es buena práctica inicializar variables para evitar "valores basura".
    int estado = 0;

    printf("=== SISTEMA INICIADO ===\n");

    // 2. LÓGICA: Aquí va el núcleo de tu algoritmo
    // ------------------------------------------

    // ------------------------------------------

    // 3. FINALIZACIÓN:
    // getchar() evita que la consola se cierre antes de ver el resultado
    // si no estás usando el debugger o la consola externa.
    printf("\nEjecucion finalizada. Presione Enter para salir...");
    fflush(stdout); // Limpia el buffer de salida
    getchar();

    return 0; // Código 0: Indica al SO que todo salió bien
}
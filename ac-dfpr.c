#include <stdio.h>
#include <stdlib.h>

struct producto
{
    int codigo;
    char nombre[50];
    int existencia;
    int vendidos;
};

void menu();
// void capturarInventario();
// void registrarVenta();
// void mostrarReporte();
void salir();

int main()
{
    int opcion;

    do
    {
        menu();
        if (scanf("%d", &opcion) != 1)
        {
            printf("Por favor, ingresa un numero valido.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        switch (opcion)
        {
        case 1:
            // capturarInventario();
            break;
        case 2:
            // registrarVenta();
            break;
        case 3:
            // mostrarReporte();
            break;
        case 4:
            salir();
            break;
        default:
            printf("\n\n\t============== OPCION INVALIDA ==============\n\n");
            printf("\tFavor de ingresar una opcion valida (1 a 4).\n\n");
            printf("\t-----------------------------------------------\n\n");
            printf("\tPresione una tecla para volver al menu principal\n\n");
        }

    } while (opcion != 4);

    return 0;
}

void menu()
{
    printf("\t-----------------------------------------------\n");
    printf("\t-----------------MENU PRINCIPAL----------------\n");
    printf("\t-----------------------------------------------\n");
    printf("\t1) Capturar inventario inicial\n");
    printf("\t2) Registrar una venta\n");
    printf("\t3) Mostrar reporte del dia\n");
    printf("\t4) Salir\n");
    printf("\t-----------------------------------------------\n");
    printf("\tElige una opcion: ");
}

void salir()
{
    printf("Gracias por usar el inventario.\n");
}

#include <stdio.h>
#include <string.h>

#define MAX 100

struct Linea {
    int id;
    char curp[19];
    char telefono[11];
};

int main() {

    struct Linea lineas[MAX];

    int total = 0;          // cuántas líneas llevo registradas
    int idAuto = 1;         // ID automático
    int i;
    char opcion;

    do {

        printf("\nRegistrar nueva linea? (s/n): ");
        scanf(" %c", &opcion);

        if(opcion == 's' || opcion =='S') {

            if(total >= MAX) {
                printf("No se pueden registrar mas lineas.\n");
                break;
            }

            lineas[total].id = idAuto++;

            printf("CURP: ");
            scanf("%s", lineas[total].curp);

            printf("Telefono (10 digitos): ");
            scanf("%s", lineas[total].telefono);

            total++;   // aumenta el contador
        }

    } while(opcion == 's' || opcion =='S');

    printf("\n--- LINEAS REGISTRADAS ---\n");

    for(i = 0; i < total; i++) {
        printf("ID: %d | CURP: %s | TEL: %s\n",
               lineas[i].id,
               lineas[i].curp,
               lineas[i].telefono);
    }

    return 0;
}

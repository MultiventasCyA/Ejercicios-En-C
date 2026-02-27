#include <stdio.h>
#include <stdlib.h>

int main() {
    //guardamos las variables
		int opcion, moneda, total, precio, cambio;
    char continuar;

  	do {																	//para repetir el proceso completo hasta que el usuario decida salir.
        while(1){
        	printf("==================================\n");
        	printf("Nombre del estudiante: Fernando Soberanis Quijano\n");
					printf("Matricula: ES261100416\n");
					printf("Grupo: DS-DFPR-2601-B1-012\n");
					printf("==================================\n");
					printf("\tMENU DE PRODUCTOS\n");
	        printf("==================================\n");
					printf("1. Galletas 1 - $8\n");
	        printf("2. Chicle 2 - $12\n");
	        printf("3. Paleta 3 - $15\n");
	        printf("4. Helado 4 - $20\n");
	        printf("5. Refresco 5 - $25\n");
	        printf("6. Salir\n");
	        printf("==================================\n");
	        printf("Seleccione clave producto: ");
	        scanf("%d", &opcion);

	        switch(opcion) {									//para validar la opción del producto.
	            case 1: precio = 8; break;
	            case 2: precio = 12; break;
	            case 3: precio = 15; break;	
	            case 4: precio = 20; break;
	            case 5: precio = 25; break;
	            case 6: printf("Gracias por usar el despachador.\n"); exit(0);
	            default: printf("Seleccion incorrecta. Intente de nuevo.\n"); continue;
	        	}
        	break; // rompe el while(1) cuando la opción es válida
				} // fin del while
				
				//inicia el proceso de validacion de monedas
        total = 0; //se inicializa en 0
        while(total < precio) { //mientras mi total de monedas ingreadas es menor al precio de producto, sigue solicitanto monedas.
            printf("Ingrese una moneda ($1, $2, $5, $10): ");
            scanf("%d", &moneda);
            if(moneda == 1 || moneda == 2 || moneda == 5 || moneda == 10) { //validamos si las monedas ingresadas son de la denominacion requerida
                total += moneda; //si son de la denomiacion, se van sumando cada moneda ingresada
                printf("Total ingresado: $%d\n", total); // se imprime el total
            } else {
                printf("Moneda no valida. Intente nuevamente.\n"); //se imprime si la moneda no es valida
            }
        }// fin while

        if(total == precio) {	
            printf("Pago exacto.\nProducto entregado.\n");
        } else {
            cambio = total - precio;
            printf("Producto entregado.\nSu cambio es: $%d\n", cambio);
        }

        printf("Desea realizar otra compra? (S/N): ");
        scanf(" %c", &continuar);

  	} while(continuar == 'S' || continuar == 's'); //hasta que el usuario decida salir (coincidir con mayus y minusc)

    return 0;
}

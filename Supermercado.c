#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float precio = 0, precioFinal = 0;
  float totalPagar = 0;      // Acumulador para el ticket final
  float productoMasCaro = 0; // Para buscar el máximo
  int contDescuentos = 0;    // Contador de productos con descuento
	
	do{
		
		printf("Ingrese el precio del producto: ");
		scanf("%f", &precio);
		
		if(precio > 0){
			
			if(precio > 100){
				precioFinal = precio * 0.9;
				printf("Descuent aplicado! Precio Final %.2f\n", precioFinal);
				contDescuentos++;
			}else {
				precioFinal = precio;
				printf("Precio sin descuento %.2f\n", precioFinal);
			}
			
			//sumamos el total gral
			totalPagar += precioFinal;
			
			//el priducto mas caro
			if(precioFinal > productoMasCaro){
				productoMasCaro = precioFinal;
			}
		
		}
		else if(precio < 0){
			printf("Error en el precio.\n");
		}
		
	}while(precio != 0);
	
	printf("\n--- Ticket de Venta ---\n");
	printf("Total a pagar: $%.2f\n", totalPagar);
	printf("Productos con descuento: %d\n", contDescuentos);
	printf("Producto mas caro: $%.2f", productoMasCaro);
	
	
	return 0;
}

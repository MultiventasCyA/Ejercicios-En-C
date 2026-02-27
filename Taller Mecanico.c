#include <stdio.h> //libreria standart
#include <time.h>	 //libreria de tiempos

int main()
{
	// Constantes fijas
	const int COSTO_FIJO = 1200;
	const int DIAS_ENTREGA = 3; // 72 hrs son 3 d�as

	// Variables para tiempos
	int dia, mes, anio; // para fechas
	int hora, minuto;		// para horarios
	// variables para datos que cambian en cada ejecucion
	char nombreCliente[50], marcaVehiculo[20], modeloVehiculo[20], colorVehiculo[15], placasVehiculo[10], tipoServicio[15];
	char espacioAsignado[3], claveEmpleado[5], nombreEmpleado[40], nombreEncargado[40];
	int porcentajeExtra;
	float precioFinal;

	// Mostrar datos fijos
	printf("Nombre del estudiante: Fernando Soberanis Quijano\n");
	printf("Matricula: ES261100416\n");
	printf("Grupo: DS-DFPR-2601-B1-012\n");
	printf("---------------------------------------------\n");
	printf("Datos de entrada al taller\n");
	printf("---------------------------------------------\n");

	// Captura de datos
	printf("Fecha de ingreso (DD/MM/AAAA): ");
	scanf("%d/%d/%d", &dia, &mes, &anio);

	printf("Hora de ingreso (HH:MM): ");
	scanf("%d:%d", &hora, &minuto);

	printf("Nombre del cliente: ");
	scanf(" %[^\n]", nombreCliente); // scanf %s - solo guarda una cadena  y las demas la deja en el buffer de entrada
	//" %[^\n]" significa: lee todo hasta encontrar un salto de l�nea (Enter)
	printf("Marca del vehiculo: ");
	scanf(" %[^\n]", marcaVehiculo);

	printf("Modelo del vehiculo: ");
	scanf(" %[^\n]", modeloVehiculo);

	printf("Color del vehiculo: ");
	scanf(" %[^\n]", colorVehiculo);

	printf("Numero de placas: ");
	scanf("%s", placasVehiculo);

	printf("Tipo de servicio (reparacion/servicio): ");
	scanf("%s", tipoServicio);

	printf("Porcentaje extra del servicio: ");
	scanf("%d", &porcentajeExtra);

	printf("Espacio asignado (A1-A4/B1-B2): ");
	scanf("%s", espacioAsignado);

	printf("Clave del empleado (M001-M006): ");
	scanf("%s", claveEmpleado);

	printf("Nombre del encargado: ");
	scanf(" %[^\n]", nombreEncargado);

	// Calcular precio final
	precioFinal = COSTO_FIJO + (COSTO_FIJO * porcentajeExtra / 100.0); // operacion para asignarle al precioFinal, costo fijo + el % extra.

	// Calcular fecha de entrega (3 dias despues)
	struct tm fechaIngreso = {0}; /*es una estructura que descompone una fecha en componentes: año, mes, dia, hora, minutos, segundos.
	El 0 es para limpiar desde el inicio todos los campos de la estructura.*/
	fechaIngreso.tm_mday = dia;
	fechaIngreso.tm_mon = mes - 1;			// (0 = enero, 11 = diciembre)
	fechaIngreso.tm_year = anio - 1900; // años desde 1900 como año 0, 2026 es 126 (2026-1900=126)
	fechaIngreso.tm_hour = hora;
	fechaIngreso.tm_min = minuto;

	/* "time_t tiempo" Es una variable que guarda un instante de tiempo en segundos desde el 1 de enero de 1970 (Epoch Unix).*/
	/* La funci�n "mktime" revisa la estructura. Al detectar que el d�a es 33, esta misma funcion recalcula la fecha: ajusta el mes,
	el d�a sobrante y, si es necesario, el a�o.*/
	time_t tiempo = mktime(&fechaIngreso);
	tiempo += DIAS_ENTREGA * 24 * 3600; // sumar 3 d�as en segundos (3 dias = 259,200 segundos).

	struct tm fechaEntrega = *localtime(&tiempo);

	// Comprobante para el  cliente
	printf("---------------------------------------------\n");
	printf("---COMPROBANTE DEL CLIENTE---\n");
	printf("Taller: Hermanos Benavidez \n");
	printf("Cliente: %s\n", nombreCliente);
	printf("Fecha de ingreso: %02d/%02d/%04d\n", dia, mes, anio);
	printf("Hora de ingreso: %02d:%02d\n", hora, minuto);
	printf("Placas del vehiculo: %s\n", placasVehiculo);
	printf("Tipo de servicio: %s\n", tipoServicio);
	printf("Precio final: $%.2f\n", precioFinal);
	printf("Vehiculo: %s %s\n", marcaVehiculo, modeloVehiculo);
	printf("Color: %s\n", colorVehiculo);
	printf("Fecha de entrega: %02d/%02d/%04d\n",
				 fechaEntrega.tm_mday,
				 fechaEntrega.tm_mon + 1,
				 fechaEntrega.tm_year + 1900);

	// Comprobante del taller
	printf("--------------------------------------------\n");
	printf("--COMPROBANTE DE LA EMPRESA---\n");
	printf("Fecha de ingreso: %02d/%02d/%04d\n", dia, mes, anio);
	printf("Vehiculo: %s %s\n", marcaVehiculo, modeloVehiculo);
	printf("Espacio asignado: %s\n", espacioAsignado);
	printf("Empleado: %s\n", claveEmpleado);
	printf("Nombre Encargado: %s\n", nombreEncargado);
	printf("Fecha de entrega: %02d/%02d/%04d\n",
				 fechaEntrega.tm_mday,
				 fechaEntrega.tm_mon + 1,
				 fechaEntrega.tm_year + 1900);
	printf("----------------------------------------------");

	return 0;
}

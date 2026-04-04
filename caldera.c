/*Imagina que estás diseñando el software para una caldera.
No puedes tener datos sueltos; cada lectura debe estar "empaquetada" con su identificación
para saber qué parte de la máquina está fallando.*/

#include <stdio.h>

struct sensor
{
	int id;
	float presion_psi;
	float temperatura_c;
};

void revisarAlertas(struct sensor caldera[], int n);

int main()
{
	struct sensor caldera[4];

	for (int i = 0; i < 4; i++)
	{
		caldera[i].id = i + 1;

		do
		{
			printf("Ingrese la presion en psi para el sensor %d: ", i + 1);
			scanf("%f", &caldera[i].presion_psi);

			if (caldera[i].presion_psi < 0)
			{
				printf("[!] ERROR: La presion no puede ser negativa.\n");
			}
		}
		while (caldera[i].presion_psi < 0);

		do
		{
			printf("Ingrese la temperatura en �C para el sensor %d: ", i + 1);
			scanf("%f", &caldera[i].temperatura_c);

			if (caldera[i].temperatura_c < -50 || caldera[i].temperatura_c > 500)
			{
				printf("[!] ERROR: La temperatura no puede ser menor que el cero absoluto.\n");
			}
		}
		while (caldera[i].temperatura_c < -50 || caldera[i].temperatura_c > 500);
	}

	revisarAlertas(caldera, 4);

	return 0;
}

void revisarAlertas(struct sensor caldera[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (caldera[i].presion_psi > 100)
		{
			printf("[ALERTA] Sensor %d: Presion critica!\n", caldera[i].id);
		}
		if (caldera[i].temperatura_c > 120)
		{
			printf("[ALERTA] Sensor %d: Sobrecalentamiento!\n", caldera[i].id);
		}
	}
}

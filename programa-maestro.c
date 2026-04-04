// Programa Maestro

#include <stdio.h>

struct motor
{
	int id;
	float rpm;
	float temperatura;
};

void analizarMotor(struct motor m);
float calcularPromedioRPM(struct motor lista[], int n);

int main()
{
	struct motor m[3];

	for (int i = 0; i < 3; i++)
	{

		m[i].id = i + 1;

		do
		{
			printf("\nIngrese el rpm del motor %d: ", m[i].id);
			scanf("%f", &m[i].rpm);

			if (m[i].rpm < 0)
			{
				printf("El valor no puede ser negativo, intente de nuevo\n");
			}
		} while (m[i].rpm < 0);

		do
		{
			printf("\nIngrese la temperatura del motor %d: ", m[i].id);
			scanf("%f", &m[i].temperatura);

			if (m[i].temperatura < 0 || m[i].temperatura > 200)
			{
				printf("El valor no puede ser negativo ni mas de 200 grados, intente de nuevo\n");
			}
		} while (m[i].temperatura < 0 || m[i].temperatura > 200);
	}

	printf("\n--- RESULTADOS DEL ANALISIS ---\n");
	for (int i = 0; i < 3; i++)
	{
		analizarMotor(m[i]);
	}

	float promedio = calcularPromedioRPM(m, 3);
	printf("\nEl promedio de RPM de la planta es: %.2f\n", promedio);

	return 0;
}

void analizarMotor(struct motor m)
{
	if (m.rpm > 5000 && m.temperatura > 80)
	{
		printf("[!] PELIGRO: Motor %d en sobreesfuerzo\n", m.id);
	}
	else
	{
		printf("[OK] Motor %d funcionando normal\n", m.id);
	}
}

float calcularPromedioRPM(struct motor lista[], int n)
{
	if (n <= 0)
		return 0;

	float suma = 0;
	for (int i = 0; i < n; i++)
	{
		suma += lista[i].rpm;
	}
	return suma / n;
}

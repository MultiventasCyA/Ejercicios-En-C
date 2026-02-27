#include <stdio.h>

/* Prototipos de funciones (Declaracion de modulos secundarios) */
float calcularArea(float base, float altura);
float calcularPresupuesto(float area);

int main() /* Modulo principal: SOLO controlador */
{
  /* Variables locales del modulo principal */
  float base, altura;
  float area, total;

  /* Encabezado con datos del estudiante */
  printf("********************************************\n");
  printf("* Nombre: Fernando Soberanis Quijano      *\n");
  printf("* Matricula: ES261100416                  *\n");
  printf("* Grupo: DS-DFPR-2601-B1-012              *\n");
  printf("********************************************\n");

  printf("\n=== COTIZADOR PINTURAS RAPIDAS ===\n");
  printf("Tarifa por m2: $150.00 MXN\n\n");

  /* Entrada de datos */
  printf("Ingrese la base de la pared (metros): ");
  scanf("%f", &base);

  printf("Ingrese la altura de la pared (metros): ");
  scanf("%f", &altura);

  /* Invocacion de funciones */
  area = calcularArea(base, altura);
  total = calcularPresupuesto(area);

  /* Salida de resultados */
  printf("\n=== RECIBO DEL PRESUPUESTO ===\n");
  printf("Medidas: %.2f m x %.2f m\n", base, altura);
  printf("Area total: %.2f m2\n", area);
  printf("---------------------------------\n");
  printf("TOTAL A PAGAR CON IVA: $%.2f MXN\n", total);

  return 0;
}

/*---------------------------------------------------
  Funcion: calcularArea
  Recibe: base y altura
  Retorna: area de la pared
---------------------------------------------------*/
float calcularArea(float base, float altura)
{
  float area; /* Variable local */
  area = base * altura;
  return area;
}

/*---------------------------------------------------
  Funcion: calcularPresupuesto
  Recibe: area calculada
  Calcula: subtotal y aplica 16% de IVA
  Retorna: total final
---------------------------------------------------*/
float calcularPresupuesto(float area)
{
  float subtotal;             /* Variable local */
  float total;                /* Variable local */
  const float TARIFA = 150.0; /* Constante local */
  const float IVA = 0.16;     /* Constante local */

  subtotal = area * TARIFA;
  total = subtotal + (subtotal * IVA);

  return total;
}

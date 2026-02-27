#include <stdio.h>
#include <string.h>

#define MAX 100 // definimos el maximo de lineas telefonicas que se pueden registrar

struct Linea
{ // creamos structura de la linea telefonica con los datos que se van a registrar
  int id;
  char curp[19];
  char nombre[100];
  char telefono[11];
  char operadora[20];
};

struct Linea lineas[MAX]; // creamos arreglos de hasta 100 lineas telefonicas
int totalLineas = 0;
int idAutoincremental = 1;

// funciones que usaremos luego, mientras las declaramos 
void registrarLinea();
void buscarLinea();
void eliminarLinea();

int main()
{

  int opcion;

  //Encabezado que solo se desplega al inicio del programa.
  printf("===================================================\n");
  printf("   SISTEMA DE RESGISTRO DE LINEAS TELEFONICAS.\n");
  printf("===================================================\n");
  printf("Nombre completo: Fernando Soberanis Quijano.\n");
  printf("Matricula: ES261100416\n");
  printf("Grupo: DS-DFPR-2601-B1-012\n");
  printf("=================================================\n\n\n");

  do
  {
  	//menu que se repite hasta que la opcion sea 4.
    printf("=========================================\n");
    printf("\t     MENU PRINCIPAL\n");
    printf("=========================================\n");
    printf("1. Lineas registradas\n");
    printf("2. Buscar linea\n");
    printf("3. Eliminar una linea\n");
    printf("4. Salir del sistema\n");
    printf("=========================================\n");
    printf("Seleccion uan opcion (1-4): ");
    scanf("%d", &opcion);

    printf("\n=========================================\n");
    printf("\tREGISTRO DE NUEVA LINEA TELEFONICA\n");
    printf("=========================================\n");

    switch (opcion)
    {
    case 1:
      registrarLinea();
      break;
    case 2:
      buscarLinea();
      break;
    case 3:
      eliminarLinea();
      break;
    case 4:
      printf("\nSALIENDO DEL SISTEMA...\n");
      printf("Gracias por usar el sistema.\n");
      break;
    default:
      printf("Opcion invalida.\n");
    }

  } while (opcion != 4);

  return 0;
}

// funcion para registrar lineas nuevas
void registrarLinea()
{

  if (totalLineas >= MAX)
  { // si mis lineas registradas son igual o mayor a 100, no se podra registrar otra.
    printf("No se pueden registrar mas lineas.\n");
    return;
  }

  int i;
  struct Linea nueva;

  nueva.id = idAutoincremental++;

  printf("\nREGISTRO DE NUEVA LINEA\n\n");
  printf("ID asignado: %d\n", nueva.id);

  printf("\nCURP (18 caracteres): ");
  scanf("%s", nueva.curp);

  getchar(); // limpiar buffer

  printf("\nNombre completo: ");
  scanf(" %[^\n]", nueva.nombre);

  do
  {
    printf("\nNumero telefonico (10 digitos): ");
    scanf("%s", nueva.telefono);
    if (strlen(nueva.telefono) != 10)
    {
      printf("Error: Debe tener 10 digitos.\n");
    }
  } while (strlen(nueva.telefono) != 10);

  int opcionOperadora;

  printf("\nSeleccione operadora:\n");
  printf("1. Telcel\n");
  printf("2. AT&T\n");
  printf("3. Movistar\n");
  printf("Seleccione opcion (1-3): ");
  scanf("%d", &opcionOperadora);

  switch (opcionOperadora)
  { // menu para elegir que operadora desea registrar
  case 1:
    strcpy(nueva.operadora, "Telcel");
    break;
  case 2:
    strcpy(nueva.operadora, "AT&T");
    break;
  case 3:
    strcpy(nueva.operadora, "Movistar");
    break;
  default:
    printf("Opcion invalida. Se asigna Telcel por defecto.\n");
    strcpy(nueva.operadora, "Telcel");
  }

  lineas[totalLineas] = nueva;
  totalLineas++;

  printf("\nREGISTRO EXITOSO.\n");
}

// funcion para buscar lineas ya registradas en base al Id o a la CURP
void buscarLinea()
{

  int criterio;
  int i;

  printf("\nBUSCAR LINEA TELEFONICA\n");
  printf("1. Buscar por ID\n");
  printf("2. Buscar por CURP\n");
  printf("Seleccione criterio (1-2): ");
  scanf("%d", &criterio);

  if (criterio == 1)
  {
    int id;
    printf("Ingrese ID: ");
    scanf("%d", &id);

    for (i = 0; i < totalLineas; i++)
    {
      if (lineas[i].id == id)
      { // compara la id en la busqueda
        printf("\nLinea encontrada:\n");
        printf("ID: %d\n", lineas[i].id);
        printf("CURP: %s\n", lineas[i].curp);
        printf("Nombre: %s\n", lineas[i].nombre);
        printf("Telefono: %s\n", lineas[i].telefono);
        printf("Operadora: %s\n", lineas[i].operadora);
        return;
      }
    }
    printf("No encontrada.\n");
  }

  else if (criterio == 2)
  {
    char curp[19];
    printf("\nIngrese CURP: ");
    scanf("%s", curp);

    for (i = 0; i < totalLineas; i++)
    {
      if (strcmp(lineas[i].curp, curp) == 0)
      { // compara cadenas de caracteres en est caso es la CURP. si lo encuentra imprime datos.
        printf("\nLinea encontrada:\n");
        printf("ID: %d\n", lineas[i].id);
        printf("Nombre: %s\n", lineas[i].nombre);
        printf("Telefono: %s\n", lineas[i].telefono);
        printf("Operadora: %s\n", lineas[i].operadora);
        return;
      }
    }
    printf("No encontrada.\n");
  }
}

// funcion para eliminar lineas ya registradas en base a la curp
void eliminarLinea()
{

  int i, j;
  char curp[19];

  printf("\nELIMINAR LINEA TELEFONICA\n");
  printf("\nIngrese CURP: ");
  scanf("%s", curp);

  for (i = 0; i < totalLineas; i++)
  {
    if (strcmp(lineas[i].curp, curp) == 0)
    { // compara cadenas de caracteres en est caso es la CURP

      for (j = i; j < totalLineas - 1; j++)
      {
        lineas[j] = lineas[j + 1];
      }

      totalLineas--; // al eliminar la linea, se decrementa la posicion de la linea
      printf("\nLinea eliminada correctamente.\n\n");
      return;
    }
  }

  printf("Linea no encontrada.\n");
}

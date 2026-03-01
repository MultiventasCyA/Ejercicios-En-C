#include <stdio.h>
#include <string.h>

#define MAX_EST 6
#define MAX_PAE 3
#define CUPO 2

// !----- ESTRUCTURA -----
struct Estudiante
{
    int numeroRegistro;
    char fecha[11];
    char matricula[10];
    char nombre[40];
    char estado[15];
    char pae[15];
};

// !----- VARIABLES GLOBALES -----
struct Estudiante estudiantes[MAX_EST];
int totalEstudiantes = 0;
int contadorRegistro = 1;

int cupos[MAX_PAE] = {0, 0, 0};
char nombresPAE[MAX_PAE][15] = {"DANZA", "PINTURA", "DEBATE"};

// !----- PROTOTIPOS -----
void menu();
void registrarEstudiante();
void asignarPAE();
void consultarDemanda();
void salir();
int validarMatricula(char nuevaMatricula[]);

// !----- MAIN -----
int main()
{

    int opcion;

    printf("=================================================\n");
    printf("Unidad Didactica: Fundamentos de Programacion\n");
    printf("Estudiante: Fernando Alessandro Soberanis Quijano\n");
    printf("Matricula: ES261100416\n");
    printf("Grupo: DS-DFPR-2601-B1-012\n");
    printf("=================================================\n");

    do
    {
        menu();
        // !Validar que la entrada sea un numero
        if (scanf("%d", &opcion) != 1)
        {
            printf("Por favor, ingresa un numero valido.\n");
            while (getchar() != '\n')
                ; // !Limpiar buffer
            continue;
        }

        switch (opcion)
        {
        case 1:
            registrarEstudiante();
            break;
        case 2:
            asignarPAE();
            break;
        case 3:
            consultarDemanda();
            break;
        case 4:
            salir();
            break;
        default:
            printf("Opcion invalida.\n");
        }

    } while (opcion != 4);

    return 0;
}

// !----- MENU -----
void menu()
{
    printf("\nPROGRAMA DE ACTIVIDADES EXTRACURRICULARES.\n");
    printf("\n1. Registro estudiante\n");
    printf("2. Asignacion PAE\n");
    printf("3. Consultar demanda PAE's\n");
    printf("4. Salir\n");
    printf("Selecciona una opcion: ");
}

// !----- REGISTRO -----
void registrarEstudiante()
{
    char opcionContinuar;

    // !Usamos un bucle en lugar de recursividad por eficiencia
    do
    {
        if (totalEstudiantes >= MAX_EST)
        {
            printf("\n--- YA NO SE PUEDEN REGISTRAR MAS ESTUDIANTES ---\n");
            return;
        }

        printf("================================\n");
        printf("1. REGISTRO DE ESTUDIANTE\n");
        printf("================================\n");

        // !Asignamos el numero de registro usando el contador global
        printf("Registro No.: %d\n", contadorRegistro);

        printf("\nFecha (DD/MM/AAAA): ");
        scanf("%s", estudiantes[totalEstudiantes].fecha);

        char matriculaTemp[10];

        printf("\nMatricula: ");
        scanf("%s", matriculaTemp);

        if (validarMatricula(matriculaTemp))
        {
            printf("La matricula ya existe.\n");
            return;
        }

        estudiantes[totalEstudiantes].numeroRegistro = contadorRegistro;
        contadorRegistro++; // !Incrementamos el contador para el siguiente registro

        strcpy(estudiantes[totalEstudiantes].matricula, matriculaTemp);

        printf("\nEstudiante: ");
        scanf(" %[^\n]", estudiantes[totalEstudiantes].nombre);

        // Inicializamos estado y PAE
        strcpy(estudiantes[totalEstudiantes].estado, "REGISTRADO");
        strcpy(estudiantes[totalEstudiantes].pae, "Ninguno");

        // !IMPORTANTE! Incrementamos el total inmediatamente despues de guardar
        totalEstudiantes++;

        printf("\n ESTUDIANTE REGISTRADO.\n");

        if (totalEstudiantes < MAX_EST)
        {
            printf("\nRegistrar otro estudiante [R] o regresar al menu [M]: ");
            scanf(" %c", &opcionContinuar);
        }
        else
        {
            opcionContinuar = 'M'; // !Forzar salida si se alcanza el limite
        }

    } while (opcionContinuar == 'R' || opcionContinuar == 'r');
}

// !----- ASIGNACION -----
void asignarPAE()
{
    char matriculaBuscada[10];
    int encontrado = -1;

    printf("\n================================\n");
    printf("2. ASIGNACION PAE\n");
    printf("================================\n");

    printf("\n\nIngresa la matricula: ");
    scanf("%s", matriculaBuscada);

    for (int i = 0; i < totalEstudiantes; i++)
    {
        if (strcmp(estudiantes[i].matricula, matriculaBuscada) == 0)
        {
            encontrado = i;
            break;
        }
    }

    if (encontrado == -1)
    {
        printf("\nMATRICULA NO ENCONTRADA.\n");
        return;
    }

    // Mostrar datos actuales
    printf("\nNo. Registro: %d", estudiantes[encontrado].numeroRegistro);
    printf("\nFecha registro: %s", estudiantes[encontrado].fecha);
    printf("\nEstudiante: %s", estudiantes[encontrado].nombre);
    printf("\n\nEstado: %s", estudiantes[encontrado].estado);

    if (strcmp(estudiantes[encontrado].estado, "ASIGNADO") == 0)
    {
        printf("ESTUDIANTE CUENTA CON REGISTRO Y PAE ASIGNADO: %s\n", estudiantes[encontrado].pae);
        return;
    }

    printf("\n\nSelecciona un PAE:\n\n");
    for (int i = 0; i < MAX_PAE; i++)
    {
        printf("%d. %s (Cupos: %d/%d)\n", i + 1, nombresPAE[i], cupos[i], CUPO);
    }

    int sel;
    printf("\nEscribe el numero: ");
    if (scanf("%d", &sel) != 1)
    {
        printf("Entrada invalida.\n");
        while (getchar() != '\n')
            ; // !Limpiar buffer
        return;
    }

    if (sel < 1 || sel > MAX_PAE)
    {
        printf("Opcion invalida.\n");
        return;
    }

    sel = sel - 1; //! Ajuste al índice real del arreglo

    if (cupos[sel] >= CUPO)
    {
        printf("PAE SIN CUPO\n");

        return;
    }

    // !Actualizar datos
    cupos[sel]++;
    strcpy(estudiantes[encontrado].estado, "ASIGNADO");
    strcpy(estudiantes[encontrado].pae, nombresPAE[sel]);

    printf("\nESTUDIANTE ASIGNADO AL PAE DE %s.\n", nombresPAE[sel]);
}

// !----- CONSULTA -----
void consultarDemanda()
{

    for (int i = 0; i < MAX_PAE; i++)
    {

        printf("\n--- %s ---\n", nombresPAE[i]);

        for (int j = 0; j < totalEstudiantes; j++)
        {
            if (strcmp(estudiantes[j].pae, nombresPAE[i]) == 0)
            {
                printf("%s\n", estudiantes[j].nombre);
            }
        }
    }
}

// !----- SALIR -----
void salir()
{
    printf("\n\nGracias por usar el Programa de Actividades Extracurriculares.\n");
}

// !----- VALIDAR MATRICULA -----
int validarMatricula(char nuevaMatricula[])
{
    for (int i = 0; i < totalEstudiantes; i++)
    {
        if (strcmp(estudiantes[i].matricula, nuevaMatricula) == 0)
        {
            return 1; // ya existe
        }
    }
    return 0; // disponible
}

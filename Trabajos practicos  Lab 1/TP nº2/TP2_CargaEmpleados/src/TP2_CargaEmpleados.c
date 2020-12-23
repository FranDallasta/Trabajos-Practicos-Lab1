/*
 ============================================================================
 Name        : TP2_CargaEmpleados.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"

#define NOMINA 1000

int main(void) {
	empleados arrayEmpleado[NOMINA];
	int opcion;
	int identificacion = 1;
	int pedirId;
	int flagCarga = 0;

	iniciarlizarListado(arrayEmpleado, NOMINA);
do{
	do{
		printf("Ingrese una de las siguientes opciones: ");
		printf("\n1) Dar de ALTA empleado/s ");
		printf("\n2) Modificar un empleado ");
		printf("\n3) Dar de BAJA un empleado ");
		printf("\n4) Informar listado de empleados ");
		printf("\n5) SALIR DEL PROGRAMA");
		printf("\n\n Opcion Seleccionada: ");
		scanf("%d",&opcion);
		if(flagCarga == 0 && opcion!=1)
		{
			printf("\nNo hay trabajadores cargados\n");
			system("pause");
		}
		system("cls");
	}while((flagCarga == 0 && opcion!=1));

	switch(opcion)
	{
		case 1:
			cargarEmpleadoS(arrayEmpleado, NOMINA, &identificacion);
			flagCarga = 1 ;
			system("pause");
			break;
		case 2:
			printf("Ingrese la id del empleado a modificar: ");
			scanf("%d", &pedirId);
			modificarEmpleado(arrayEmpleado,NOMINA, pedirId);
			system("pause");
			break;
		case 3:
			printf("Ingrese la id del empleado a borrar : ");
		    scanf("%d", &pedirId);
			eliminarEmpleado(arrayEmpleado, NOMINA ,pedirId);
			break;
		case 4:
			ordenarEmpleados (arrayEmpleado, NOMINA);
			mostrarNombreS(arrayEmpleado, NOMINA);
			arribaPromedio (arrayEmpleado, NOMINA);
			system("pause");
			break;
		case 5:
			printf("Saliendo del programa\n");\
			system("pause");
			return EXIT_SUCCESS;
			break;
		default:
			printf("Opcion Incorrecta\n");
			system("pause");
			break;
	}
	system("cls");
  }while(opcion !=5);
}


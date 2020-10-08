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

#define NOMINA 10 //1000 EMPLEADOS COMO MAXIMO




int main(void) {
	empleados arrayEmpleado[NOMINA];
	int opcion;
	int identificacion = 1;
	//int opcion2;


	iniciarlizarListado(arrayEmpleado, NOMINA);
do{
	printf("Ingrese una de las siguientes opciones: ");
	printf("\n1) Dar de ALTA empleado/s ");
	printf("\n2) Modificar un empleado ");// modificar no es reescribir, tengo que cambiar la funcion
	printf("\n3) Dar de BAJA un empleado ");
	printf("\n4) Informar listado de empleados ");
	printf("\n5) SALIR DEL PROGRAMA");
	printf("\n\n Opcion Seleccionada: ");
	scanf("%d",&opcion);


	switch(opcion)
	{
		case 1:
			cargarEmpleadoS(arrayEmpleado, NOMINA, &identificacion); //Carga de forma secuencial todos los lugares del array que no esten en 1(LLENO).
			//printf("%d",identificacion );
			system("pause");
			break;
		case 2:
			printf("Ingrese la id del empleado a modificar: ");
			scanf("%d", &identificacion );
			modificarEmpleado(arrayEmpleado, identificacion);
			system("pause");
			break;
		case 3:
			printf("Ingrese la id del empleado a borrar : ");
		    scanf("%d", &identificacion );
			eliminarEmpleado(arrayEmpleado, identificacion);
			break;
		case 4:
			mostrarNombreS(arrayEmpleado, NOMINA); //Muestra uno por uno siempre y cuando no tenga un VACIO en isEmpty
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


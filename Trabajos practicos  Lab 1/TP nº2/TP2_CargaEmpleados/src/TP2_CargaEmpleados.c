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
	int identificacion;
//	int posicion = 0;
do{
	printf("Ingrese una de las siguientes opciones: ");
	printf("\n0) Inicializar el listado ");
	printf("\n1) Cargar empleados ");
	printf("\n2) Mostrar un empleado ");
	printf("\n3) Borrar un empleado ");
	printf("\n4) Modificar un empleado ");
	printf("\n7) SALIR DEL PROGRAMA");
	printf("\n\n Opcion Seleccionada: ");
	scanf("%d",&opcion);


	switch(opcion)
	{
		case 0:
			iniciarlizarListado(arrayEmpleado, NOMINA); // Pone un 0 logico en cada arrayEmpleado
			system("pause");
			break;
		case 1:
			cargarEmpleadoS(arrayEmpleado, NOMINA); //Carga de forma secuencial todos los lugares del array que no esten en 1(LLENO).
			system("pause");
			break;
		case 2:
			mostrarNombreS(arrayEmpleado, NOMINA); //Muestra uno por uno siempre y cuando no tenga un VACIO en isEmpty
			system("pause");
			break;
		case 3:
			printf("Ingrese la id del empleado a borrar : ");
		    scanf("%d",&identificacion);
			eliminarEmpleado(arrayEmpleado, identificacion);
			break;
		case 4:
			printf("Ingrese la id del empleado a modificar: ");
			scanf("%d",&identificacion);
			modificarEmpleado(arrayEmpleado, identificacion);
			system("pause");
			break;
		case 7:
			printf("Saliendo del programa\n");\
			system("pause");
			return EXIT_SUCCESS;
	}
	system("cls");
  }while(opcion !=7);
}


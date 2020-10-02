/*
 * arrayEmployees.c
 *
 *  Created on: Sep 30, 2020
 *      Author: FRANCO
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"

#define LLENO 1
#define VACIO 0

void iniciarlizarListado(empleados array[], int LARGO)
{
	int i;
	if(array != NULL && LARGO >= 0){
	for(i=0;i<LARGO;i++)
	{
		array[i].isEmpty = VACIO; // al estar el espacio VACIO, es decir, en 0 (logico) indica que puede llenarse
	}
	}
}

empleados cargarEmpleado(int i)
{
	empleados trabajador;
	trabajador.id = i ;
	printf("Ingrese el nombre del trabajador: ");
	fflush(stdin);
	gets(trabajador.nombre);
	printf("Ingrese el apellido deltrabajador: ");
	fflush(stdin);
	gets(trabajador.apellido);
	printf("Ingrese el salario del trabajador: ");
    scanf("%f", &trabajador.salario);
    printf("Ingrese el sector del trabajador: ");
    scanf("%d", &trabajador.sector);
    trabajador.isEmpty = LLENO;
	return trabajador;
}

void cargarEmpleadoS(empleados array[], int LARGO)
{
	int i = 0;
	char respuesta;
	if(array != NULL && LARGO >= 0){
		do{
	//for (i= 0 ; i<LARGO; i++)
		if(array[i].isEmpty ==VACIO)
		{
			array[i] =cargarEmpleado(i);
		}
		i++;
		printf("\nDesea ingresar otro empleado? ");
		fflush(stdin);
		scanf("%c", &respuesta);
		}while(respuesta != 'n');
	}
}

void  mostrarNombre(empleados trabajador)
{
	printf("\nLa id del trabajador es %d", trabajador.id);
	printf("\nEl trabajador se llama %s", trabajador.nombre);
	printf("\nEl trabajador se apellida %s", trabajador.apellido);
	printf("\nEl trabajador tiene un salario de $%.2f", trabajador.salario);
	printf("\nEl trabajador esta en el sector numero: %d", trabajador.sector);
}

void mostrarNombreS(empleados array[], int LARGO)
{
	int i;
	if(array != NULL && LARGO >= 0){
	for (i=0; i<LARGO; i++)
	{
		if(array[i].isEmpty != VACIO)
		{
			mostrarNombre(array[i]);
		}
	}
	}
}

void eliminarEmpleado(empleados trabajador[], int i)
{
	if(trabajador != NULL){
	trabajador[i].isEmpty = VACIO;
	}
}

void modificarEmpleado(empleados trabajador[], int i)
{
	if(trabajador != NULL){
	trabajador[i].isEmpty = VACIO; // al estar el espacio VACIO, es decir, en 0 (logico) indica que puede llenarse
	trabajador[i]=cargarEmpleado(i);
	}
}


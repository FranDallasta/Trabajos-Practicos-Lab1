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

int iniciarlizarListado(empleados array[], int LARGO)
{
	int retorno = -1;
	int i;
	if(array != NULL && LARGO >= 0)
	{
		for(i=0;i<LARGO;i++)
		{
			array[i].isEmpty = VACIO; // al estar el espacio VACIO, es decir, en 0 (logico) indica que puede llenarse
			retorno = 0;
		}
	}
	return retorno;
}

int buscarEmpty(empleados array[], int LARGO, int* posicion)
{
	int retorno =-1;
	int i;
	if(array != NULL && LARGO >= 0)
	{
		for(i=0; i<LARGO; i++)
		{
			if(array[i].isEmpty == VACIO){
			retorno = 0;
			*posicion = i;
			break;
			}
		}
	}
	return retorno;
}

empleados cargarEmpleado()//int i
{
	empleados trabajador;
	//trabajador.id = i;
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

int cargarEmpleadoS(empleados array[], int LARGO, int* i)
{
	char respuesta;
	int retorno = -1;
	int posicion = 0;

	if(array != NULL && LARGO >= 0)
	{
		do{
			*i = *i + 1;
			if(buscarEmpty(array, LARGO, &posicion)==0)
			{
				array[posicion].id = *i;
				array[posicion] =cargarEmpleado();
			}
			else
			{
				printf("No hay lugar");
			}
			printf("\nDesea ingresar otro empleado?(s/n):  ");
			fflush(stdin);
			scanf("%c", &respuesta);
			retorno = 0;
		}while(respuesta != 'n' || respuesta == 's'); //sacar el while
	}
	return retorno;
}

void  mostrarNombre(empleados trabajador)
{
	printf("\nLa id del trabajador es %d", trabajador.id);
	printf("\nEl trabajador se llama %s", trabajador.nombre);
	printf("\nEl trabajador se apellida %s", trabajador.apellido);
	printf("\nEl trabajador tiene un salario de $%.2f", trabajador.salario);
	printf("\nEl trabajador esta en el sector numero: %d\n", trabajador.sector);
}

int mostrarNombreS(empleados array[], int LARGO)
{
	int i;
	int retorno = -1;
	if(array != NULL && LARGO >= 0)
	{
		for (i=0; i<LARGO; i++)
		{
			if(array[i].isEmpty != VACIO)
			{
				mostrarNombre(array[i]);
				retorno = 0;
			}
		}
	}
	return retorno;
}

int eliminarEmpleado(empleados trabajador[], int i)
{
	int retorno = -1;

	if(trabajador != NULL)
	{
		trabajador[i].isEmpty = VACIO;
		retorno = 0;
	}
	return retorno;
}

int modificarEmpleado(empleados trabajador[], int i)
{
	char respuesta;
	char auxNombre[51];
	char auxApellido[51];
	float auxSalario;
	int auxSector;
	int opcion;
	int retorno = -1;

	if(trabajador != NULL)
	{
		//trabajador[i].isEmpty = VACIO; // al estar el espacio VACIO, es decir, en 0 (logico) indica que puede llenarse
		//trabajador[i]=cargarEmpleado(i);

		printf("\n 1) Modificar Nombre");
		printf("\n 2) Modificar Apellido");
		printf("\n 3) Modificar Salario");
		printf("\n 4) Modificar Sector");
		printf("\n Ingrese una opcion: ");
		scanf("%d", &opcion);
		do{
			switch (opcion)
			{
				case 1:
				printf("Ingrese el nombre modificado del trabajador: ");
				fflush(stdin);
				gets(auxNombre); //strcpy
				strcpy(trabajador[i].nombre, auxNombre);
			//	trabajador[i].nombre[51] = auxNombre[51];
				break;
				case 2:
				printf("Ingrese el apellido modificado del trabajador: ");
				fflush(stdin);
				gets(auxApellido);
				strcpy(trabajador[i].apellido, auxApellido);
		//		trabajador[i].apelido[51] = auxApellido[51];
				break;
				case 3:
				printf("Ingrese el salario modificado del trabajador: ");
		    	scanf("%f", &auxSalario);
		    	trabajador[i].salario = auxSalario;
				break;
				case 4:
				printf("Ingrese el sector modificado del trabajador: ");
		    	scanf("%d", &auxSector);
				trabajador[i].sector = auxSector;
				break;
			}
			printf("Desea modificar algo mas? (s/n): ");
			fflush(stdin);
			scanf("%c", &respuesta);
		}while(respuesta != 'n' || respuesta == 's'); //sacar wwhile poner salida
		retorno = 0;
	}
	return retorno;
}


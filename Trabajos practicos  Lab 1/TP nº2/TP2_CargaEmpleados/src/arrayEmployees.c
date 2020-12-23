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
			array[i].isEmpty = VACIO;
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

empleados cargarEmpleado(int i)
{
	empleados trabajador;
	trabajador.id = i;
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
	int retorno;
	int posicion = 0;

	if(array != NULL && LARGO >= 0)
	{
			if(buscarEmpty(array, LARGO, &posicion)==0)
			{
				array[posicion] =cargarEmpleado(*i);
				*i = *i +1;
				retorno = 0;
			}
			else
			{
				printf("No hay lugar");
				retorno = -1;
			}
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

int eliminarEmpleado(empleados trabajador[], int LARGO,  int pedirId)
{
	int j;
	int retorno =-1;

	for(j = 0; j <LARGO; j++)
	{
		if(trabajador[j].isEmpty==LLENO && trabajador[j].id == pedirId)
		{
			trabajador[j].isEmpty= VACIO;
			break;
		}
	}

		return retorno;
}

int modificarEmpleado(empleados trabajador[],int LARGO, int pedirId)
{
	char auxNombre[51];
	char auxApellido[51];
	float auxSalario;
	int auxSector;
	int opcion;
	int retorno = -1;
	int lugar =0;
	int j;

	for(j = 0; j <LARGO; j++)
	{
		if(trabajador[j].id == pedirId)
		{
			lugar = j;
			break;
		}
	}

	if(trabajador != NULL)
	{
		do{
		system("cls");
		printf("\n 1) Modificar Nombre");
		printf("\n 2) Modificar Apellido");
		printf("\n 3) Modificar Salario");
		printf("\n 4) Modificar Sector");
		printf("\n 5) SALIR \n");
		mostrarNombre(trabajador[j]);
		printf("\n Ingrese una opcion: ");
		scanf("%d", &opcion);

			switch (opcion)
			{
				case 1:
				printf("Ingrese el nombre modificado del trabajador: ");
				fflush(stdin);
				gets(auxNombre); //strcpy
				strcpy(trabajador[lugar].nombre, auxNombre);
				break;
				case 2:
				printf("Ingrese el apellido modificado del trabajador: ");
				fflush(stdin);
				gets(auxApellido);
				strcpy(trabajador[lugar].apellido, auxApellido);
				break;
				case 3:
				printf("Ingrese el salario modificado del trabajador: ");
		    	scanf("%f", &auxSalario);
		    	trabajador[lugar].salario = auxSalario;
				break;
				case 4:
				printf("Ingrese el sector modificado del trabajador: ");
		    	scanf("%d", &auxSector);
				trabajador[lugar].sector = auxSector;
				break;
			}
		}while(opcion != 5);
		retorno = 0;
	}
	return retorno;
}

void ordenarEmpleados (empleados trabajador[],int LARGO)
{
	char auxNombre[51];
	char auxApellido[51];
	float auxSalario;
	int auxSector;
	int auxIsEmprty;
	int auxId;
	int i;
	int j;

	if (trabajador != NULL && LARGO > 0)
	{
		for (i = 0; i < LARGO - 1; i++) {
			for (j = i + 1; j < LARGO; j++) {

				if(strcmp(trabajador[i].apellido,trabajador[j].apellido)>0)
				{
					strcpy(auxNombre,trabajador[i].nombre);
					strcpy(trabajador[i].nombre,trabajador[j].nombre);
					strcpy(trabajador[j].nombre, auxNombre);

					strcpy(auxApellido,trabajador[i].apellido);
					strcpy(trabajador[i].apellido,trabajador[j].apellido);
					strcpy(trabajador[j].apellido,auxApellido);

					auxSalario = trabajador[i].salario;
					trabajador[i].salario = trabajador[j].salario;
					trabajador[j].salario = auxSalario;

					auxSector = trabajador[i].sector;
					trabajador[i].sector = trabajador[j].sector;
					trabajador[j].sector = auxSector;

					auxId = trabajador[i].id;
					trabajador[i].id = trabajador[j].id;
					trabajador[j].id = auxId;

					auxIsEmprty = trabajador[i].isEmpty;
					trabajador[i].isEmpty = trabajador[j].isEmpty;
					trabajador[j].isEmpty = auxIsEmprty;
				}
				else if (strcmp(trabajador[i].apellido,trabajador[j].apellido) ==0 && (trabajador[i].sector > trabajador[j].sector))
				{
					strcpy(auxNombre,trabajador[i].nombre);
					strcpy(trabajador[i].nombre,trabajador[j].nombre);
					strcpy(trabajador[j].nombre, auxNombre);

					strcpy(auxApellido,trabajador[i].apellido);
					strcpy(trabajador[i].apellido,trabajador[j].apellido);
					strcpy(trabajador[j].apellido,auxApellido);

					auxSalario = trabajador[i].salario;
					trabajador[i].salario = trabajador[j].salario;
					trabajador[j].salario = auxSalario;

					auxSector = trabajador[i].sector;
					trabajador[i].sector = trabajador[j].sector;
					trabajador[j].sector = auxSector;

					auxId = trabajador[i].id;
					trabajador[i].id = trabajador[j].id;
					trabajador[j].id = auxId;

					auxIsEmprty = trabajador[i].isEmpty;
					trabajador[i].isEmpty = trabajador[j].isEmpty;
					trabajador[j].isEmpty = auxIsEmprty;
				}
			}
		}
	}
}

void arribaPromedio (empleados trabajador[],int LARGO)
{
	int i;
	int acumEmpleados = 0;
	int sobrePromedio =0;
	float acumSalario = 0;
	float salarioPromedio = 0;


	if (trabajador != NULL && LARGO > 0)
	{
		for (i = 0; i < LARGO; i++)
		{
			if (trabajador[i].isEmpty != VACIO) // Recorre el array acumulando el salario y los trabajadores
			{
				acumSalario = acumSalario + trabajador[i].salario;
				acumEmpleados++;
			}
		}

		salarioPromedio = acumSalario/acumEmpleados; // Hace el promedio

		for (i = 0; i < LARGO; i++)
		{
			if (trabajador[i].isEmpty != VACIO && trabajador[i].salario > salarioPromedio ) // Cuenta los que estan por encima de la media
			{
				sobrePromedio++;
			}
		}
		printf("\nLa sumatoria de salarios da un total de $%.2f.\n", acumSalario);
		printf("La cantidad de empleados que superan el salario minimo ($%.2f) es de %d.\n",salarioPromedio, sobrePromedio);
	}
}

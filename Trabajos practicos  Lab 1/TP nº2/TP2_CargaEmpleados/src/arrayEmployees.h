/*
 * arrayEmployees.h
 *
 *  Created on: Sep 30, 2020
 *      Author: FRANCO
 */
#include <stdio.h>
#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

typedef struct{
	    int id;
		char nombre[51];
		char apellido[51];
		float salario;
		int sector;
		int isEmpty;
}empleados;

#endif /* ARRAYEMPLOYEES_H_ */


void iniciarlizarListado(empleados array[], int LARGO);
empleados cargarEmpleado(int i);
void cargarEmpleadoS(empleados array[], int LARGO);
void mostrarNombre(empleados trabajador);
void mostrarNombreS(empleados array[], int LARGO);
void eliminarEmpleado(empleados trabajador[], int i);
void modificarEmpleado(empleados trabajador[], int i);

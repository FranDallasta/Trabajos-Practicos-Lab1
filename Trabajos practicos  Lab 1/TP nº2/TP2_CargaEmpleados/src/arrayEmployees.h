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

/*
 * \brief Pide un array y su longitud
 * \param array[] array que queremos a inicializar.
 * \param int largo del array.
 * \return int devuelve .
 */
int iniciarlizarListado(empleados array[], int LARGO);

int buscarEmpty(empleados array[], int LARGO, int* posicion);
empleados cargarEmpleado();
int cargarEmpleadoS(empleados array[], int LARGO,  int* i);
void mostrarNombre(empleados trabajador);
int mostrarNombreS(empleados array[], int LARGO);
int eliminarEmpleado(empleados trabajador[], int LARGO,  int pedirId);
int modificarEmpleado(empleados trabajador[],int LARGO, int pedirId);
void ordenarEmpleados (empleados trabajador[],int LARGO);

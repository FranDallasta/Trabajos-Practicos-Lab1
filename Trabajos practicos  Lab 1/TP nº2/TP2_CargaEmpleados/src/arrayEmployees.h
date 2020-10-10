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

/*
 * \brief Pide un array, su longitud, y la posicion.
 * \param empleados array de tipo empleados.
 * \param int largo del array.
 * \param int puntero con la posicion .
 * \return int devuelve .
 */
int buscarEmpty(empleados array[], int LARGO, int* posicion);

/*
 * \brief crea un tipo de dato empleado
 * \return empleados devuelve .
 */
empleados cargarEmpleado();

/*
 * \brief Carga un array de tipo empleados.
 * \param array[] de tipo empleados.
 * \param int largo del array.
 * \param int puntero con la identificacion .
 * \return int devuelve .
 */
int cargarEmpleadoS(empleados array[], int LARGO,  int* i);

/*
 * \brief muestra un solo dato de tipo empleado.
 * \param empleados array de tipo empleados.
 * \return void
 */
void mostrarNombre(empleados trabajador);

/*
 * \brief crea un tipo de dato empleado
 * \param empleados array de tipo empleados.
 * \param int largo del array.
 * \return int.
 */
int mostrarNombreS(empleados array[], int LARGO);

/*
 * \brief elimina un dato del array de tipo empleado
 * \param empleados array de tipo empleados.
 * \param int largo del array.
 * \param int id
 * \return int.
 */
int eliminarEmpleado(empleados trabajador[], int LARGO,  int pedirId);

/*
 * \brief modificaun dato del array de tipo empleado
 * \param empleados array de tipo empleados.
 * \param int largo del array.
 * \param int id
 * \return int.
 */
int modificarEmpleado(empleados trabajador[],int LARGO, int pedirId);

/*
 * \brief elimina un dato del array de tipo empleado
 * \param empleados array de tipo empleados.
 * \param int largo del array.
 * \return int.
 */
void ordenarEmpleados (empleados trabajador[],int LARGO);

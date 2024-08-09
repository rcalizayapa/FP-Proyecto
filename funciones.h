#ifndef FUNCIONES_H
#define FUNCIONES_H

#include<iostream>
#include <ctime>
#include <conio.h>
#include <string>
#include <list>

using namespace std;
struct estudiante{
int id;

string nombre;
string apellido;

int edad;
string estatura;
string escuela;
string correo;
string codigo;
string whatsapp;
string ingreso;
string salida;
string llave;
};


extern 
list<estudiante> estudiantes;
//Funcion para limpiar la pantalla
void limpiarPantalla();
string obtenerHoraActual();
//Funcion para obtener ingresar los datos de los estudiantes
void ingresarDatosEstudiantes();
//Funcon para mostrar los datos de los estudiantes
void mostrarDatosEstudiante(const estudiante& est);
//Funcion para introducir y reconocer la llave del estufiante
void ejecutarPrograma();
//Funcion para mostrar el menu secundario de opciones
void mostrarMenuSecundario();

#endif

#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <ctime>
#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;
enum inicio{
    ejecutar,
    salir,
    finalizar
};
int main();
void mostrarbienvenido(int kbhit());
string funcioninicio(inicio boton);
//Funcion para limpiar la pantalla
void limpiarPantalla();
string obtenerHoraActual();

//Funcion para obtener ingresar los datos de los estudiantes
void ingresarDatosEstudiantes();
//Funcon para mostrar los datos de los estudiantes
void mostrarDatosEstudiante();
//Funcion para introducir y reconocer la llave del estufiante
void ejecutarPrograma();
//Funcion para mostrar el menu secundario de opciones
void mostrarMenuSecundario();

#endif

#ifndef MENUINICIAL_H_
#define MENUINICIAL_H_
#include <iostream>
#include <ctime>
#include <conio.h>
#include <stdio.h>



enum Inicio{
	ejecutar,
	salir,
	finalizar
};

void mostrarbienvenido(int kbhit());
string funcioninicio(Inicio boton);
#endif

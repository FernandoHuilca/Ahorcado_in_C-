#pragma once

#include <iostream>
using namespace std; 
#include "rlutil.h"

//Funcion que muestra las opciones de instrucciones del juego al usuario vs pc and vs otrher player
int instrucciones();
//Funcion que muestra las instrucciones para jugar vs otro player
void instrucciones_VS_otherPlayer();
//Funcion que muestra las instrucciones para jugar vs la computadora
void instrucciones_VS_computadora();
//Funcion que da color al texto seleccionado
void seleccion_color(string text, int fila, int columna, bool seleccion);
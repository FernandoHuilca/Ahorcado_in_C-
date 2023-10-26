#pragma once
#include <iostream>
using namespace std;
#include "rlutil.h"

//Prototipos
//Funcion que muestra el munu principal y sus opciones correspondientes
int menu_principal();
//Funcion que da color al texto seleccionado en cada momento
void seleccion_color(string text, int fila, int columna, bool seleccion);
//Funcion que escribe en la parte superios como titulo "juego del ahoracado"
void bienvenida(int fila, int columna);
#pragma once
#include <iostream>
using namespace std;
#include "rlutil.h"

//Funcion que permite jugar vs otra persona, todo lo necesario para dicho juego 
void jugar_vs_persona(); 
//Funcion que una vez terminado el juego obliga al usuario a aplastar enter para salir 
int salir_volverAjugar(bool victoria);
//Para las opciones de salir o volver a jugar 
void seleccion_color_3(string text, int fila, int columna, bool seleccion);
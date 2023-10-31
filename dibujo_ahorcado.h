#pragma once
#include <iostream>
#include "rlutil.h"
using namespace std; 

//Funcion que presenta el dibujo del ahorcado completo 
void dibujo_completo(int numero, int fila, int columna, int intentos);
//Dibujo del cadalso donde reposa el muerto XD
void dibujo_cadalso(int fila, int columna);
//Dibujo del senor en caso de victoria, obviamente no esta muerto jeje 
void dibujo_victoria(int fila, int columna);
//Funcion que muestra el muerto en caso de haber perdido el juego 
void dibujo_perdida(int fila, int columna);
//Funcion que dibuja el policia que te arreta en caso de perder el juego y matar a la persona xd 
void dibujo_policia(int fila, int columna); 
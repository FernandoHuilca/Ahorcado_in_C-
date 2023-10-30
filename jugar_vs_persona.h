#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "rlutil.h"

//Funcion que permite jugar vs otra persona, todo lo necesario para dicho juego 
void jugar_vs_persona(); 
//Funcion que una vez terminado el juego obliga al usuario a aplastar enter para salir 
int salir_volverAjugar(bool victoria);
//Para las opciones de salir o volver a jugar 
void seleccion_color_3(string text, int fila, int columna, bool seleccion);
//Permite al usuario escoger entre las 3 opciones de intentos para el juego
int intentos_permitidos();
//Funcion que da color a la seleccion de los intentos
void seleccion_color_4(string text, int fila, int columna, bool seleccion);
//Verifica si la letra ingresada por el usuario esta dentro de la palabra
void verificacion_letra(string& palabra, bool& encontrado, char& letra2);
//Dibuja unas rayas que representann cada letra que tiene la palabra en una ubicacion dada
void dibujo_espacios_letras(int can_letras, int fila, int columna);
#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "rlutil.h"
#include "decoraciones.h"
#include "dibujo_ahorcado.h"
#include <cctype>  // Incluir la biblioteca para funciones de caracteres

//Funcion que permite jugar vs otra persona, todo lo necesario para dicho juego 
void jugar_vs_persona(); 
//Funcion que una vez terminado el juego obliga al usuario a aplastar enter para salir 
int salir_volverAjugar(bool victoria);
//Para las opciones de salir o volver a jugar caso de victoria
void seleccion_color_3(string text, int fila, int columna, bool seleccion);
////Para las opciones de salir o volver a jugar caso de derrota
void seleccion_color_5(string text, int fila, int columna, bool seleccion);
//Permite al usuario escoger entre las 3 opciones de intentos para el juego
int intentos_permitidos();
//Funcion que da color a la seleccion de los intentos
void seleccion_color_4(string text, int fila, int columna, bool seleccion);
//Verifica si la letra ingresada por el usuario esta dentro de la palabra
void verificacion_letra(string& palabra, bool& encontrado, char& letra2);
//Dibuja unas rayas que representann cada letra que tiene la palabra en una ubicacion dada
void dibujo_espacios_letras(int can_letras);
//Funcion que permite visualizar el numero de intentos que se tiene
void vidas_intenos(int fila, int columna, int intentos); 
//Funcion que va dibujando las letras en caso de que se acierte 
void mostrar_letras(const string& palabra, char letra, int fila, int columna, string& aux_palabra);

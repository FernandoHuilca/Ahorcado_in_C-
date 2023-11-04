#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include <fstream>
#include <chrono>
#include <thread>
#include <random>


//Funcion que devuelve una palabra al azar del archivo de txt para que juegue contra la computadora
string palabra_aleatoria();
//funcion que me devuleve un numero aleatorio con el fin de escoger una palabra aleatoria de un arreglo 
int num_aleatorios(int num_palabras_);


const int DIM = 500;
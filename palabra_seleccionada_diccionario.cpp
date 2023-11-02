#include "palabra_seleccionada_diccionario.h"

const int DIM = 500; 

string palabra_aleatoria()
{
	string palabra = "Cocaina";
	ifstream leer_archivo;
	leer_archivo.open("diccionario_palabras.txt");
	if (!leer_archivo.is_open())
	{
		cout << "ERROR: Archivo no se pudo abrir" << endl; 
	}
	else
	{
		
	}
	return palabra; 
}
#include "palabra_seleccionada_diccionario.h"


string palabra_aleatoria()
{
	int i = 0;
	ifstream leer_archivo;
	string palabra;
	string arreglo_palabras[DIM];
	leer_archivo.open("diccionario_palabras.txt");
	if (!leer_archivo.is_open())
	{
		cout << "ERROR: Archivo no se pudo abrir" << endl;
	}
	else
	{
		while ((!leer_archivo.eof()) && (i < DIM))
		{
			getline(leer_archivo, palabra);
			arreglo_palabras[i] = palabra;

			i++;
		}
		leer_archivo.close();
	}
	return arreglo_palabras[num_aleatorios(i)];
}
int num_aleatorios(int num_palabras_) {
	random_device rd;  // Semilla del dispositivo
	mt19937 gen(rd()); // Inicializar semilla aleatoria
	int min = 0;
	int max = num_palabras_; // Rangos
	uniform_int_distribution<int> distribution(min, max);
	return distribution(gen);
}
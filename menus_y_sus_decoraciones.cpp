
#include "menus_y_sus_decoraciones.h"

int menu_principal()
{
	int opcion;
	do
	{
		cout << " 1. Empezar a jugar" << endl;
		cout << " 2. Instrucciones" << endl;
		cout << " 0. Salir" << endl;
		cin >> opcion;

		if (opcion < 0 || opcion > 2)
		{
			cout << "ERROR: El numero ingresado esta fuera de los parametros" << endl;
			cout << "Intente nuevamente." << endl;
		}

	} while (opcion < 0 || opcion > 2);
	return opcion;
}
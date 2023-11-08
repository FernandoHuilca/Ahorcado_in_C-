
#include "menus_y_sus_decoraciones.h"
#include "decoraciones.h"
#include "interfaz_grafica_principal.h"


void seleccion_color(string text, int fila, int columna, bool seleccion)
{
	if (!seleccion)
	{
		rlutil::locate(columna, fila);
		rlutil::setBackgroundColor(rlutil::COLOR::CYAN);
		cout << text;
		rlutil::setBackgroundColor(rlutil::COLOR::LIGHTCYAN);
		rlutil::locate(columna - 2, fila);
		cout << (char)175;
	}
	else
	{
		rlutil::setBackgroundColor(rlutil::COLOR::LIGHTCYAN);
		rlutil::locate(columna, fila);
		cout << " " << text;
		rlutil::locate(columna - 2, fila);
		cout << " ";
	}
}


int menu_principal()
{

	int tecla;
	int ok = 0;

	int fila_op_verticales = 15;
	int columna_op_verticales = 50;
	int fila_op_horizontales = 27;
	int columna_op_horizontales = 10;
	int separacion_op_horizontales = 92;


	// Establecer el color de fondo de la consola
	rlutil::setBackgroundColor(rlutil::LIGHTCYAN);
	// Borrar la pantalla para que el color de fondo se aplique en toda la consola
	rlutil::cls();
	creador_Fer(30,108);
	rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  

	dibujo_cuadrado(42, 12, 36, 9);
	dibujo_cuadrado(100, 25, 11, 4);
	dibujo_cuadrado(10, 25, 11, 4);
	bienvenida(6, 52);

	while (true)
	{
		seleccion_color(" Jugar Vs Compu      ", fila_op_verticales, columna_op_verticales, ok);
		seleccion_color(" Jugar Vs Persona    ", fila_op_verticales + 1, columna_op_verticales, ok + 1);
		seleccion_color(" Instrucciones juego ", fila_op_verticales + 2, columna_op_verticales, ok + 2);
		seleccion_color(" Sonido ", fila_op_horizontales, columna_op_horizontales + separacion_op_horizontales, ok + 3);
		seleccion_color(" Salir  ", fila_op_horizontales, columna_op_horizontales, ok + 4);

		tecla = rlutil::getkey();
		switch (tecla)
		{
		case 14: //SUBIR
		{
			if (ok == 0)
			{
				ok = ok - 2;
			}
			else
			{
				if (ok == -4)
				{
					ok = ok + 2;
				}
				else
				{
					ok = ok + 1;
				}
			}

			break;
		}
		case 15: //BAJAR
		{
			if ((ok == -2) || (ok == -3) || (ok == -4))
			{

				ok = 0;
			}
			else
			{
				ok = ok - 1;
			}
			break;
		}
		case 17: //derecha
		{
			ok = -3;
			break;
		}
		case 16: //Izquierda
		{
			ok = -4;
			break;
		}
		case 1: // Enter
		{
			return ok;
		}
		}
	}
}



void bienvenida(int fila, int columna)
{
    rlutil::locate(columna, fila);
    cout << "Juego del Ahorcado";
    rlutil::locate(columna, fila + 1);
    cout << "_____ ___ ________";

}
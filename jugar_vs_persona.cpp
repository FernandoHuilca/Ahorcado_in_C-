#include "jugar_vs_persona.h"

void jugar_vs_persona()
{
	bool gano_perdio; //controla si se gano o no el juego
	// Establecer el color de la consola 
	rlutil::setBackgroundColor(rlutil::LIGHTMAGENTA);
	// Borrar la pantalla para que el color de fondo se aplique en toda la consola
	rlutil::cls();
	rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  
	do
	{

		bool correcto;
		int intentos = NULL;
		string palabra;
		char letra;
		cout << "Escriba la palabra para que el otro jugado adivine: ";
		cin >> palabra;
		cout << "Escriba el numero de intentos que tiene para adivinar: ";
		cin >> intentos;
		while (intentos != 0)
		{
			correcto = false; // boleano para saber si averto o no 
			cout << "Escriba la letra que cree esta dentro de la palabra: ";
			cin >> letra;
			for (int i = 0; i < palabra.length(); i++) // Con palabra.length iteramos el numero de chars que tenga la palabra
			{
				if (letra == (palabra[i]))
				{
					// Establecer el color de la consola en caso de acertar la letra
					rlutil::setBackgroundColor(rlutil::LIGHTGREEN);
					// Borrar la pantalla para que el color de fondo se aplique en toda la consola
					rlutil::cls();
					rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  
					cout << "Correcto!! la letra \"" << letra << "\" si forma parte de la palabra" << endl;
					cout << "Aun te quedan: " << intentos << " intentos." << endl;
					correcto = true;
				}
			}
			if (correcto == false)
			{
				// Establecer el color de la consola en caso de errar en la letra
				rlutil::setBackgroundColor(rlutil::RED);
				// Borrar la pantalla para que el color de fondo se aplique en toda la consola
				rlutil::cls();
				rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  
				cout << "Incorrecto!! la letra \"" << letra << "\" no forma parte de la palabra" << endl;
				intentos--;
				cout << "Te quedan " << intentos << " intentos." << endl;
			}
			if (intentos == 0)
			{
				gano_perdio = false; 
			}
		}

	} while (salir_volverAjugar(gano_perdio) != 0);
	
}


void seleccion_color_3(string text, int fila, int columna, bool seleccion)
{
	if (!seleccion)
	{
		rlutil::locate(columna, fila);
		rlutil::setBackgroundColor(rlutil::COLOR::RED);
		rlutil::setColor(rlutil::COLOR::WHITE); //Le da color a las letras  
		cout << text;
		rlutil::setBackgroundColor(rlutil::COLOR::LIGHTRED);
		rlutil::locate(columna - 2, fila);
		cout << (char)175;
	}
	else
	{
		rlutil::setBackgroundColor(rlutil::COLOR::LIGHTRED);
		rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  
		rlutil::locate(columna, fila);
		cout << " " << text;
		rlutil::locate(columna - 2, fila);
		cout << " ";
	}
}

int salir_volverAjugar(bool victoria)
{
	if (victoria == true)
	{
		// Establecer el color de la consola en caso de ganar el juego
		rlutil::setBackgroundColor(rlutil::LIGHTCYAN);
		// Borrar la pantalla para que el color de fondo se aplique en toda la consola
		rlutil::cls();
		cout << "FELICIDADES, GANO EL JUEGO!!" << endl;
	}
	else
	{
		// Establecer el color de la consola en caso de Perder el juego
		rlutil::setBackgroundColor(rlutil::LIGHTRED);
		// Borrar la pantalla para que el color de fondo se aplique en toda la consola
		rlutil::cls();
		cout << "Oh no, PERDIO EL JUEGO!!" << endl;
	}
	int tecla;
	int ok = 0;
	int fila_op_horizontales = 27;
	int columna_op_horizontales = 10;
	int separacion_op_horizontales = 92;

	rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  

	while (true)
	{
		seleccion_color_3(" Salir ", fila_op_horizontales, columna_op_horizontales + separacion_op_horizontales, ok);
		seleccion_color_3(" Volver a jugar ", fila_op_horizontales, columna_op_horizontales, ok + 1);

		tecla = rlutil::getkey();
		switch (tecla)
		{
		case 17: //derecha
		{
			if (ok == 0)
			{
				ok = -1;
			}
			else
			{
				ok += 1;
			}
			break;
		}
		case 16: //Izquierda
		{
			if (ok == -1)
			{
				ok = 0;
			}
			else
			{
				ok--;
			}
			break;
		}
		case 1: // Enter
		{
			return ok;
		}
		}
	}
}


#include "instrucciones_del_juego.h"

void seleccion_color2(string text, int fila, int columna, bool seleccion)
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

int instrucciones()
{

	int tecla;
	int ok = 0;

	int fila_op_verticales = 15;
	int columna_op_verticales = 50;
	int fila_op_horizontales = 27;
	int columna_op_horizontales = 90;


	rlutil::setBackgroundColor(rlutil::LIGHTCYAN);
	// Borrar la pantalla para que el color de fondo se aplique en toda la consola
	rlutil::cls();
	rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  

	while (true)
	{
		seleccion_color2(" Como jugar vs computadora  ", fila_op_verticales, columna_op_verticales, ok);
		seleccion_color2(" Como jugar vs otra persona ", fila_op_verticales + 1, columna_op_verticales, ok + 1);
		seleccion_color2(" Volver  ", fila_op_horizontales, columna_op_horizontales, ok + 2);

		tecla = rlutil::getkey();
		switch (tecla)
		{
		case 14: //SUBIR
		{
			if (ok == 0)
			{
				ok = ok - 1;
			}
			else
			{
				if (ok == -2)
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
			if ((ok == -1) || (ok == -2))
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
			ok = -2;
			break;
		}
		case 1: // Enter
		{
			return ok;
		}
		}
	}
}

void instrucciones_VS_otherPlayer()
{
	int valor_tecla = NULL; 
	int columna = 30;
	int fila = 9;
	do
	{
		rlutil::locate(columna, fila);
		cout << "Instrucciones del Juego del Ahorcado:" << endl;
		rlutil::locate(columna, fila+1);
		cout << "1. Elige un jugador para seleccionar una palabra oculta." << endl;
		rlutil::locate(columna, fila+2);
		cout << "2. Elige un límite máximo de intentos (por ejemplo, 6)." << endl;
		rlutil::locate(columna, fila+3);
		cout << "3. Los demás jugadores intentarán adivinar la palabra letra por letra." << endl;
		rlutil::locate(columna, fila+4);
		cout << "4. Si adivinan una letra correcta, se revelará en la palabra oculta." << endl;
		rlutil::locate(columna, fila+5);
		cout << "5. Si adivinan una letra incorrecta, perderán un intento." << endl;
		rlutil::locate(columna, fila+6);
		cout << "6. Si se quedan sin intentos antes de adivinar la palabra, pierden." << endl;
		rlutil::locate(columna, fila+7);
		cout << "7. El objetivo es adivinar la palabra antes de quedarse sin intentos." << endl;
		rlutil::locate(columna, fila+8);
		cout << "8. ¡Diviértete jugando al Ahorcado!" << endl << endl;
		rlutil::locate(90, 27);
		rlutil::setBackgroundColor(rlutil::COLOR::CYAN);
		cout << " Volver " << endl;
		valor_tecla = rlutil::getkey();
		rlutil::setBackgroundColor(rlutil::COLOR::LIGHTCYAN);
		
	} while (valor_tecla != 1);


}

void instrucciones_VS_computadora()
{
	int valor_tecla = NULL;
	int columna = 30;
	int fila = 9;
	do
	{
		rlutil::locate(columna, fila);
		cout << "Instrucciones del Juego del Ahorcado:";
		rlutil::locate(columna, fila + 1);
		cout << "1. La computadora ha seleccionado una palabra oculta.";
		rlutil::locate(columna, fila + 2);
		cout << "2. Debes adivinar la palabra antes de quedarte sin intentos.";
		rlutil::locate(columna, fila + 3);
		cout << "3. Cada letra correcta se revelará en la palabra oculta.";
		rlutil::locate(columna, fila + 4);
		cout << "4. Cada letra incorrecta te hará perder un intento.";
		rlutil::locate(columna, fila + 5);
		cout << "5. Tienes un límite máximo de intentos (por ejemplo, 6).";
		rlutil::locate(columna, fila + 6);
		cout << "6. ¡Adivina la palabra antes de quedarte sin intentos!";
		rlutil::locate(columna, fila + 7);
		cout << "7. ¡Diviértete jugando al Ahorcado contra la computadora!";
		rlutil::locate(90, 27);
		rlutil::setBackgroundColor(rlutil::COLOR::CYAN);
		cout << " Volver " << endl;
		valor_tecla = rlutil::getkey();
		rlutil::setBackgroundColor(rlutil::COLOR::LIGHTCYAN);

	} while (valor_tecla != 1);
}
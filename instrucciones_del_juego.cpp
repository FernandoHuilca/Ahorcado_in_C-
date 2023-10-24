
#include "instrucciones_del_juego.h"

int instrucciones()
{
	int opcion;
	do
	{
		cout << " 1. Como jugar VS la computadora" << endl;
		cout << " 2. Como jugar VS otro jugador" << endl;
		cout << " 0. Volver" << endl;
		cin >> opcion;

		if (opcion < 0 || opcion > 2)
		{
			cout << "ERROR: El numero ingresado esta fuera de los parametros" << endl;
			cout << "Intente nuevamente." << endl;
		}

	} while (opcion < 0 || opcion > 2);
	return opcion;
}

void instrucciones_VS_otherPlayer()
{
	char opcion = NULL;
	do
	{
		cout << "Instrucciones del Juego del Ahorcado:" << endl;
		cout << "1. Elige un jugador para seleccionar una palabra oculta." << endl;
		cout << "2. Elige un límite máximo de intentos (por ejemplo, 6)." << endl;
		cout << "3. Los demás jugadores intentarán adivinar la palabra letra por letra." << endl;
		cout << "4. Si adivinan una letra correcta, se revelará en la palabra oculta." << endl;
		cout << "5. Si adivinan una letra incorrecta, perderán un intento." << endl;
		cout << "6. Si se quedan sin intentos antes de adivinar la palabra, pierden." << endl;
		cout << "7. El objetivo es adivinar la palabra antes de quedarse sin intentos o adivinarla correctamente." << endl;
		cout << "8. ¡Diviértete jugando al Ahorcado!" << endl << endl;
		cout << "Presione \"X\" para volver" << endl;
		cin >> opcion;
	} while (opcion != 'X' && opcion != 'x');


}
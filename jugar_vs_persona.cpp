#include "jugar_vs_persona.h"

void jugar_vs_persona()
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
		correcto = false; 
		cout << "Escriba la letra que cree esta dentro de la palabra: ";
		cin >> letra;
		for (int i = 0; i < 4; i++)
		{
			if (letra == (palabra[i]))
			{
				cout << "Correcto!! la letra \"" << letra << "\" si forma parte de la palabra" << endl;
				cout << "Aun te quedan: " << intentos << " intentos." << endl;
				correcto = true;
			}
		}
		if (correcto == false)
		{
			cout << "Incorrecto!! la letra \"" << letra << "\" no forma parte de la palabra" << endl;
			intentos--;
			cout << "Te quedan " << intentos << " intentos." << endl;
		}
		if (intentos == 0)
		{
			cout << "SE ACABO EL JUEGO, ESTAS MUERTO :)" << endl;
		}
	}
	


}
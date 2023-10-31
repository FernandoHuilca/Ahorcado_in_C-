#include "dibujo_ahorcado.h"

void dibujo_completo(int numero, int fila, int columna, int intentos)
{
	//todos estos ifs controlan el dibujo en caso de los diferentes numeros de intentos que disponemos 6, 8 y 10 
	if (intentos == 6)
	{
		if (numero == 3) 
		{
			numero = 11;
		}
		else if (numero == 4)
		{
			numero = 6;
		}
		else if (numero == 5)
		{
			numero = 9; 
		}
		else if (numero == 6)
		{
			numero = 10;
		}
	}
	if (intentos == 8)
	{
		if (numero==7)
		{
			numero = 9;
		}
		else if (numero == 8)
		{
			numero = 10;
		}
	}
	switch (numero)
	{
	case 0:
	{
		break;
	}
	case 1:
	{
		rlutil::locate(columna, fila );
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna , fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | O  O |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   | __HELP!" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		break; 
	}
	case 2:
	{
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila+1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila+2);
		cout << "      | O  o |" << endl;
		rlutil::locate(columna, fila+3);
		cout << "      |  ~   | _oh NO!!" << endl;
		rlutil::locate(columna, fila+4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila+5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila+6);
		cout << "                " << endl;
		rlutil::locate(columna, fila+7);
		cout << "      | .  . |" << endl;
		rlutil::locate(columna, fila+8);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila+9);
		cout << "      |  .   |" << endl;
		rlutil::locate(columna, fila+10);
		cout << "      |______|" << endl;
		break;
	}
	case 3:
	{
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | T  T |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   |" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila + 6);
		cout << "   /          " << endl;
		rlutil::locate(columna, fila + 7);
		cout << "  /  /| .  . |" << endl;
		rlutil::locate(columna, fila + 8);
		cout << " /  / |      |" << endl;
		rlutil::locate(columna, fila + 9);
		cout << "      |  .   |      " << endl;
		rlutil::locate(columna, fila + 10);
		cout << "      |______|     " << endl;
		break; 
	}
	case 4:
	{
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | U  U |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   |" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila + 6);
		cout << "   /            \\" << endl;
		rlutil::locate(columna, fila + 7);
		cout << "  /  /| .  . |\\  \\" << endl;
		rlutil::locate(columna, fila + 8);
		cout << " /  / |      | \\  \\" << endl;
		rlutil::locate(columna, fila + 9);
		cout << "      |  .   |      " << endl;
		rlutil::locate(columna, fila + 10);
		cout << "      |______|     " << endl;
		break;
	}
	case 5:
	{
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | v  v |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   |" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila + 6);
		cout << "   /            \\" << endl;
		rlutil::locate(columna, fila + 7);
		cout << "  /  /| .  . |\\  \\" << endl;
		rlutil::locate(columna, fila + 8);
		cout << " /  / |      | \\  \\" << endl;
		rlutil::locate(columna, fila + 9);
		cout << "<  <  |  .   | " << endl;
		rlutil::locate(columna, fila + 10);
		cout << "|  |  |______|  " << endl;
		rlutil::locate(columna, fila + 11);
		cout << "|__|            " << endl;
		rlutil::locate(columna, fila + 12);
		cout << "\\__/            " << endl;
		break;
	}
	case 6:
	{
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | v  v |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   |" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila + 6);
		cout << "   /            \\" << endl;
		rlutil::locate(columna, fila + 7);
		cout << "  /  /| .  . |\\  \\" << endl;
		rlutil::locate(columna, fila + 8);
		cout << " /  / |      | \\  \\" << endl;
		rlutil::locate(columna, fila + 9);
		cout << "<  <  |  .   |  >  >" << endl;
		rlutil::locate(columna, fila + 10);
		cout << "|  |  |______|  |  |" << endl;
		rlutil::locate(columna, fila + 11);
		cout << "|__|            |__|" << endl;
		rlutil::locate(columna, fila + 12);
		cout << "\\__/            \\__/" << endl;
		break;
	}
	case 7:
	{
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | Y  Y |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   |" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila + 6);
		cout << "   /            \\" << endl;
		rlutil::locate(columna, fila + 7);
		cout << "  /  /| .  . |\\  \\" << endl;
		rlutil::locate(columna, fila + 8);
		cout << " /  / |      | \\  \\" << endl;
		rlutil::locate(columna, fila + 9);
		cout << "<  <  |  .   |  >  >" << endl;
		rlutil::locate(columna, fila + 10);
		cout << "|  |  |______|  |  |" << endl;
		rlutil::locate(columna, fila + 11);
		cout << "|__|  |   |     |__|" << endl;
		rlutil::locate(columna, fila + 12);
		cout << "\\__/ /   /      \\__/" << endl;
		rlutil::locate(columna, fila + 13);
		cout << "    /____| " << endl;
		break;
	}
	case 8:
	{
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | Y  Y |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   |" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila + 6);
		cout << "   /            \\" << endl;
		rlutil::locate(columna, fila + 7);
		cout << "  /  /| .  . |\\  \\" << endl;
		rlutil::locate(columna, fila + 8);
		cout << " /  / |      | \\  \\" << endl;
		rlutil::locate(columna, fila + 9);
		cout << "<  <  |  .   |  >  >" << endl;
		rlutil::locate(columna, fila + 10);
		cout << "|  |  |______|  |  |" << endl;
		rlutil::locate(columna, fila + 11);
		cout << "|__|  |   |  |  |__|" << endl;
		rlutil::locate(columna, fila + 12);
		cout << "\\__/ /   / \\  \\ \\__/" << endl;
		rlutil::locate(columna, fila + 13);
		cout << "    /____| |___\\" << endl;
		break; 
	}
	case 9:
	{
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | W  W |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   |" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila + 6);
		cout << "   /            \\" << endl;
		rlutil::locate(columna, fila + 7);
		cout << "  /  /| .  . |\\  \\" << endl;
		rlutil::locate(columna, fila + 8);
		cout << " /  / |      | \\  \\" << endl;
		rlutil::locate(columna, fila + 9);
		cout << "<  <  |  .   |  >  >" << endl;
		rlutil::locate(columna, fila + 10);
		cout << "|  |  |______|  |  |" << endl;
		rlutil::locate(columna, fila + 11);
		cout << "|__|  |   |  |  |__|" << endl;
		rlutil::locate(columna, fila + 12);
		cout << "\\__/ /   / \\  \\ \\__/" << endl;
		rlutil::locate(columna, fila + 13);
		cout << "    /____| |___\\" << endl;
		rlutil::locate(columna, fila + 14);
		cout << "     |  | " << endl;
		rlutil::locate(columna, fila + 15);
		cout << "     (  | " << endl;
		rlutil::locate(columna, fila + 16);
		cout << "     |  |  " << endl;
		rlutil::locate(columna, fila + 17);
		cout << "    _|  | " << endl;
		rlutil::locate(columna, fila + 18);
		cout << " ccC____) " << endl;
		break;
	}
	case 10:
	{
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | U  U |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   |" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila + 6);
		cout << "   /            \\" << endl;
		rlutil::locate(columna, fila + 7);
		cout << "  /  /| .  . |\\  \\" << endl;
		rlutil::locate(columna, fila + 8);
		cout << " /  / |      | \\  \\" << endl;
		rlutil::locate(columna, fila + 9);
		cout << "<  <  |  .   |  >  >" << endl;
		rlutil::locate(columna, fila + 10);
		cout << "|  |  |______|  |  |" << endl;
		rlutil::locate(columna, fila + 11);
		cout << "|__|  |   |  |  |__|" << endl;
		rlutil::locate(columna, fila + 12);
		cout << "\\__/ /   / \\  \\ \\__/" << endl;
		rlutil::locate(columna, fila + 13);
		cout << "    /____| |___\\" << endl;
		rlutil::locate(columna, fila + 14);
		cout << "     |  |   |  |" << endl;
		rlutil::locate(columna, fila + 15);
		cout << "     (  |   (  |" << endl;
		rlutil::locate(columna, fila + 16);
		cout << "     |  |   |  |" << endl;
		rlutil::locate(columna, fila + 17);
		cout << "    _|  |   |  |" << endl;
		rlutil::locate(columna, fila + 18);
		cout << " ccC____) Ccc___)" << endl;
		break;
	}
	case 11:
	{
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | v  v |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   |" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila + 6);
		cout << "   /          " << endl;
		rlutil::locate(columna, fila + 7);
		cout << "  /  /| .  . |" << endl;
		rlutil::locate(columna, fila + 8);
		cout << " /  / |      | " << endl;
		rlutil::locate(columna, fila + 9);
		cout << "<  <  |  .   | " << endl;
		rlutil::locate(columna, fila + 10);
		cout << "|  |  |______|  " << endl;
		rlutil::locate(columna, fila + 11);
		cout << "|__|            " << endl;
		rlutil::locate(columna, fila + 12);
		cout << "\\__/            " << endl;
		break;
	}
	default:
		rlutil::locate(columna, fila);
		cout << "     \\\\\\\\\\\\\\\\" << endl;
		rlutil::locate(columna, fila + 1);
		cout << "      |      |" << endl;
		rlutil::locate(columna, fila + 2);
		cout << "      | X  X |" << endl;
		rlutil::locate(columna, fila + 3);
		cout << "      |  ~   |" << endl;
		rlutil::locate(columna, fila + 4);
		cout << "       \\  - / " << endl;
		rlutil::locate(columna, fila + 5);
		cout << "     ___|##|___" << endl;
		rlutil::locate(columna, fila + 6);
		cout << "   /            \\" << endl;
		rlutil::locate(columna, fila + 7);
		cout << "  /  /| .  . |\\  \\" << endl;
		rlutil::locate(columna, fila + 8);
		cout << " /  / |      | \\  \\" << endl;
		rlutil::locate(columna, fila + 9);
		cout << "<  <  |  .   |  >  >" << endl;
		rlutil::locate(columna, fila + 10);
		cout << "|  |  |______|  |  |" << endl;
		rlutil::locate(columna, fila + 11);
		cout << "|__|  |   |  |  |__|" << endl;
		rlutil::locate(columna, fila + 12);
		cout << "\\__/ /   / \\  \\ \\__/" << endl;
		rlutil::locate(columna, fila + 13);
		cout << "    /____| |___\\" << endl;
		rlutil::locate(columna, fila + 14);
		cout << "     |  |   |  |" << endl;
		rlutil::locate(columna, fila + 15);
		cout << "     (  |   (  |" << endl;
		rlutil::locate(columna, fila + 16);
		cout << "     |  |   |  |" << endl;
		rlutil::locate(columna, fila + 17);
		cout << "    _|  |   |  |" << endl;
		rlutil::locate(columna, fila + 18);
		cout << " ccC____) Ccc___)" << endl;
		break;
	}
}



void dibujo_cadalso(int fila, int columna) 
{
	rlutil::locate(columna, fila);
	cout << "       _______________" << endl;
	rlutil::locate(columna, fila + 1);
	cout << "      |____________   |" << endl;
	rlutil::locate(columna, fila + 2);
	cout << "      |            |  |" << endl;
	rlutil::locate(columna, fila + 3);
	cout << "      |            |  |" << endl;
	rlutil::locate(columna, fila + 4);
	cout << "      |            |  |" << endl;
	rlutil::locate(columna, fila + 5);
	cout << "      |            |  |" << endl;
	rlutil::locate(columna, fila + 6);
	cout << "     |=|           |  |" << endl;
	rlutil::locate(columna, fila + 7);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 8);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 9);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 10);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 11);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 12);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 13);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 14);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 15);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 16);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 17);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 18);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 19);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 20);
	cout << "                   |  |" << endl;
	rlutil::locate(columna, fila + 21);
	cout << "                   |  |" << endl;
	rlutil::locate(columna-3, fila + 22);
	cout << "  ____________________|__|__" << endl;
	rlutil::locate(columna-3, fila + 23);
	cout << " /                          \\" << endl;
	rlutil::locate(columna-3, fila + 24);
	cout << "/____________________________\\" << endl;
}

void dibujo_victoria(int fila, int columna)
{
	rlutil::locate(columna, fila);
	cout << "        \\\\\\\\\\\\\\" << endl;
	rlutil::locate(columna, fila + 1);
	cout << "        |      |" << endl;
	rlutil::locate(columna, fila + 2);
	cout << "        | ^  ^ |" << endl;
	rlutil::locate(columna, fila + 3);
	cout << "        |  ~   |       \\__" << endl;
	rlutil::locate(columna, fila + 4);
	cout << "Gracias! \\ -- /        |\\ |" << endl;
	rlutil::locate(columna, fila + 5);
	cout << "       ___|  |___      | \\|" << endl;
	rlutil::locate(columna, fila + 6);
	cout << "     /            \\    |__|" << endl;
	rlutil::locate(columna, fila + 7);
	cout << "    /  /| .  . |\\  \\ / /" << endl;
	rlutil::locate(columna, fila + 8);
	cout << "  <  <  |      | \\    /" << endl;
	rlutil::locate(columna, fila + 9);
	cout << "   \\  \\ |  .   |  \\__/" << endl;
	rlutil::locate(columna, fila + 10);
	cout << "    \\ __|______|" << endl;
	rlutil::locate(columna, fila + 11);
	cout << "        |      |" << endl;
	rlutil::locate(columna, fila + 12);
	cout << "        |  |   |" << endl;
	rlutil::locate(columna, fila + 13);
	cout << "        |__|___|" << endl;
	rlutil::locate(columna, fila + 14);
	cout << "        |  |  |" << endl;
	rlutil::locate(columna, fila + 15);
	cout << "        (  (  |" << endl;
	rlutil::locate(columna, fila + 16);
	cout << "       _|  |  |" << endl;
	rlutil::locate(columna, fila + 17);
	cout << "   cccC_Cccc___)" << endl;
}


void dibujo_perdida(int fila, int columna)
{
	rlutil::locate(columna, fila);
	cout << "     \\\\\\\\\\\\\\\\" << endl;
	rlutil::locate(columna, fila + 1);
	cout << "      |      |" << endl;
	rlutil::locate(columna, fila + 2);
	cout << "      | X  X |" << endl;
	rlutil::locate(columna, fila + 3);
	cout << "      |  ~   |" << endl;
	rlutil::locate(columna, fila + 4);
	cout << "       \\  - / " << endl;
	rlutil::locate(columna, fila + 5);
	cout << "     ___|##|___" << endl;
	rlutil::locate(columna, fila + 6);
	cout << "   /            \\" << endl;
	rlutil::locate(columna, fila + 7);
	cout << "  /  /| .  . |\\  \\" << endl;
	rlutil::locate(columna, fila + 8);
	cout << " /  / |      | \\  \\" << endl;
	rlutil::locate(columna, fila + 9);
	cout << "<  <  |  .   |  >  >" << endl;
	rlutil::locate(columna, fila + 10);
	cout << "|  |  |______|  |  |" << endl;
	rlutil::locate(columna, fila + 11);
	cout << "|__|  |   |  |  |__|" << endl;
	rlutil::locate(columna, fila + 12);
	cout << "\\__/ /   / \\  \\ \\__/" << endl;
	rlutil::locate(columna, fila + 13);
	cout << "    /____| |___\\" << endl;
	rlutil::locate(columna, fila + 14);
	cout << "     |  |   |  |" << endl;
	rlutil::locate(columna, fila + 15);
	cout << "     (  |   (  |" << endl;
	rlutil::locate(columna, fila + 16);
	cout << "     |  |   |  |" << endl;
	rlutil::locate(columna, fila + 17);
	cout << "    _|  |   |  |" << endl;
	rlutil::locate(columna, fila + 18);
	cout << " ccC____) Ccc___)" << endl;
}

void dibujo_policia(int fila, int columna)
{
	rlutil::locate(columna, fila);
	cout << "                      ________________" << endl;
	rlutil::locate(columna, fila + 1);
	cout << "                      \\      __      /         __" << endl;
	rlutil::locate(columna, fila + 2);
	cout << "                       \\_____()_____/         /  )" << endl;
	rlutil::locate(columna, fila + 3);
	cout << "                       '============`        /  /" << endl;
	rlutil::locate(columna, fila + 4);
	cout << "                        |---\\  /---|        /  /" << endl;
	rlutil::locate(columna, fila + 5);
	cout << "                       (| @\\| |/@  |)      /  /" << endl;
	rlutil::locate(columna, fila + 6);
	cout << "                        \\   (_)   /       /  /" << endl;
	rlutil::locate(columna, fila + 7);
	cout << "                        |\\ '---` /|      /  /   USTED ES RESPONSABLE" << endl;
	rlutil::locate(columna, fila + 8);
	cout << "                _______/ \\\\_____// \\____/ o_|   DE ESTA MUERTE??!!!" << endl;
	rlutil::locate(columna, fila + 9);
	cout << "               /       \\  /     \\  /   / o_|" << endl;
	rlutil::locate(columna, fila + 10);
	cout << "              / |           o|        / o_| \\" << endl;
	rlutil::locate(columna, fila + 11);
	cout << "             /  |  _____     |       / /   \\ \\" << endl;
	rlutil::locate(columna, fila + 12);
	cout << "            /   |  |===|    o|      / /    \\ \\" << endl;
	rlutil::locate(columna, fila + 13);
	cout << "           |    |   @/      |     / /      \\ \\" << endl;
	rlutil::locate(columna, fila + 14);
	cout << "           |    |___________o|__/----)   \\    \\/" << endl;
	rlutil::locate(columna, fila + 15);
	cout << "           |    '              ||  --)    \\     |" << endl;
	rlutil::locate(columna, fila + 16);
	cout << "           |___________________||  --)     \\    /" << endl;
	rlutil::locate(columna, fila + 17);
	cout << "                |           o|   ''''   |   \\__/" << endl;
	rlutil::locate(columna, fila + 18);
	cout << "                |            |          |" << endl;

}
#include "jugar_vs_persona.h"
#include "decoraciones.h"
#include "dibujo_ahorcado.h"

void jugar_vs_persona()
{
	bool gano_perdio = false; //controla si se gano o no el juego
	// Establecer el color de la consola 
	rlutil::setBackgroundColor(rlutil::LIGHTMAGENTA);
	// Borrar la pantalla para que el color de fondo se aplique en toda la consola
	rlutil::cls();
	rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  
	do
	{

		bool correcto;// boleano para saber si acerto o no 
		int intentos = NULL;
		int long_palabra;
		int intentos_const;
		int numero_dibujo_partes=0;
		string palabra_dibujar; 
		string palabra;
		dibujo_cuadrado(5, 2, 111, 27);
		rlutil::locate(25, 11);
		cout << "Escriba la palabra para que el otro jugador adivine: ";
		cin >> palabra;
		long_palabra = palabra.length();
		string aux_palabra(palabra.length(), ' '); // Inicializa aux_palabra con guiones bajos
		for (char& c : palabra) 
		{
			c = toupper(c); //Para transformar la palabra a todas mayusculas util porque quien sabe si luego escriben como gente especial
		}
		palabra_dibujar = palabra; 
		rlutil::locate(25, 12);
		cout << "Seleccione el numero de intentos que tiene para adivinar: ";
		intentos = intentos_permitidos();
		intentos_const = intentos;
		rlutil::cls();
		rlutil::locate(22, 10);
		dibujo_espacios_letras(long_palabra);
		dibujo_cuadrado(5, 2, 111, 27);
		vidas_intenos(3, 10, intentos);
		dibujo_cadalso(3, 84);


		while (intentos != 0 && gano_perdio == false)
		{
			char letra2;
			verificacion_letra(palabra, correcto, letra2);
			if (correcto == true)
			{
				// Establecer el color de la consola en caso de acertar la letra
				rlutil::setBackgroundColor(rlutil::LIGHTGREEN);
				// Borrar la pantalla para que el color de fondo se aplique en toda la consola
				rlutil::cls();
				dibujo_cuadrado(5, 2, 111, 27);
				rlutil::locate(22, 10);
				dibujo_espacios_letras(long_palabra);
				dibujo_cadalso(3, 84);//dibuja el cadalso nuevamente
				dibujo_completo(numero_dibujo_partes, 6, 80, intentos_const); //dibuja al muerto xd
				rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  
				rlutil::locate(10, 17);
				cout << "Correcto!! la letra \"" << letra2 << "\" si forma parte de la palabra" << endl;
				mostrar_letras(palabra_dibujar, letra2, 9, 23, aux_palabra);
				if (palabra.empty())
				{
					gano_perdio = true; 
				}
				else
				{
					rlutil::locate(10, 18);
					cout << "Aun te quedan: " << intentos << " intentos." << endl;
					vidas_intenos(3, 10, intentos);
				}
			}
			else
			{
				numero_dibujo_partes += 1;
				// Establecer el color de la consola en caso de errar en la letra
				rlutil::setBackgroundColor(rlutil::RED);
				// Borrar la pantalla para que el color de fondo se aplique en toda la consola
				rlutil::cls();
				rlutil::locate(22, 10);
				dibujo_espacios_letras(long_palabra);
				dibujo_cadalso(3, 84); //dibuja el cadalso nuevamente
				dibujo_completo(numero_dibujo_partes, 6, 80, intentos_const);//dibuja al muerto xd
				dibujo_cuadrado(5, 2, 111, 27);
				rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  
				rlutil::locate(10, 17);
				cout << "Incorrecto!! la letra \"" << letra2 << "\" no forma parte de la palabra" << endl;
				intentos--;
				rlutil::locate(10, 18);
				cout << "Te quedan " << intentos << " intentos." << endl;
				vidas_intenos(3, 10, intentos);
				mostrar_letras(palabra_dibujar, letra2, 9, 23, aux_palabra);
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


void verificacion_letra(string &palabra, bool &encontrado, char &letra2)
{
	char letra;
	rlutil::locate(10, 15);
	cout << "Escriba la letra que cree esta dentro de la palabra: ";
	cin >> letra;
	letra = toupper(letra);
	letra2 = letra;

	size_t posicion = palabra.find(letra); /*Creo una variable del tipo size_t la llamo posicion y le asigno
	la posicion en donde se encientra dicha letra dentro del arreglo string palabra*/
	/*size_t: size_t es un tipo de dato sin signo que se utiliza comúnmente para representar tamaños y
	posiciones en contenedores, como arreglos y cadenas. Se garantiza que es lo suficientemente grande
	para representar el tamaño de cualquier objeto en C++, lo que lo hace adecuado para índices y tamaños
	de contenedores. No puede representar números negativos, lo que evita problemas comunes relacionados
	con desbordamientos y subdesbordamientos de enteros en operaciones de índices y tamaños.*/
	encontrado = false; //asumo que la letra no se encuentra en la palabra, si me equivoco lo corrigo en el siguiente bucle
	while (posicion != string::npos)
	{
		encontrado = true;
		// La letra fue encontrada en la palabra, la voy a eliminar 
		palabra.erase(posicion, 1);
		//la palabra esta modificada ahora quiero ver si existe otra letra de las mismas en otra posicion
		posicion = palabra.find(letra);
	}
}


int intentos_permitidos()
{
	int tecla;
	int ok = 0;

	int fila_op_verticales = 13; 
	int columna_op_verticales = 27;

	while (true)
	{
		seleccion_color_4(" 6 Intentos  ", fila_op_verticales, columna_op_verticales, ok);
		seleccion_color_4(" 8 Intentos  ", fila_op_verticales + 1, columna_op_verticales, ok + 1);
		seleccion_color_4(" 10 Intentos ", fila_op_verticales + 2, columna_op_verticales, ok + 2);

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
				ok++;
			}

			break;
		}
		case 15: //BAJAR
		{
			if (ok == -2)
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
			if (ok == 0)
			{
				return 6;
			}
			else if (ok == -1)
			{
				return 8;
			}
			else
			{
				return 10;
			}
		}
		}
	}
}

void seleccion_color_4(string text, int fila, int columna, bool seleccion)
{
	if (!seleccion)
	{
		rlutil::locate(columna, fila);
		rlutil::setBackgroundColor(rlutil::COLOR::MAGENTA);
		rlutil::setColor(rlutil::COLOR::WHITE); //Le da color a las letras  
		cout << text;
		rlutil::setBackgroundColor(rlutil::COLOR::LIGHTMAGENTA);
		rlutil::locate(columna - 2, fila);
		cout << (char)175;
	}
	else
	{
		rlutil::setBackgroundColor(rlutil::COLOR::LIGHTMAGENTA);
		rlutil::setColor(rlutil::COLOR::BLACK); //Le da color a las letras  
		rlutil::locate(columna, fila);
		cout << " " << text;
		rlutil::locate(columna - 2, fila);
		cout << " ";
	}
}

void dibujo_espacios_letras(int can_letras)
{
	for (int i = 0; i < can_letras; i++)
	{
		int j = 0;
		cout << " " << (char)196 << " ";
		j = j + 20;
	}
	cout << endl;
}

void vidas_intenos(int fila, int columna, int intentos)
{
	rlutil::locate(columna, fila);
	cout << "Intentos: ";
	for (int i = 0; i < intentos; i++)
	{
		cout << " <3 "; 
	}
}

void mostrar_letras(const string& palabra, char letra, int fila, int columna, string& aux_palabra)
{
	rlutil::locate(columna, fila);
	for (int i = 0; i < palabra.length(); i++)
	{
		if (letra == palabra[i])
		{
			aux_palabra[i] = palabra[i];
		}
		cout << aux_palabra[i] << "  "; 
	}
}

/* Juego_del_Ahorcado.cpp :  los jugadores intentan adivinar una palabra oculta letra por letra antes de 
que se les agoten los intentos.*/
// Author: Fernando Huilca 

#include "animacion_carga_inicio.h"
#include "menus_y_sus_decoraciones.h"
#include "instrucciones_del_juego.h"
#include "interfaz_grafica_principal.h"


int main()
{

	animacion_de_carga();
	cout << "____BIENVENIDO AL JUEGO DEL AHORCADO____" << endl;
	switch (menu_principal())
	{
	case 0: 
	{

		break;
	}

	case -1:
	{
		
		break;
	}

	case -2:
	{
		switch (instrucciones())
		{
		case 1:
		{
			break;
		}
		case 2:
		{
			instrucciones_VS_otherPlayer();
			break;
		}
		case 0:
		{
			break;
		}
		}
	}

	case -3: 
	{
		break;
	}
	case -4:
	{
		cout << "Gracias por jugar" << endl;
		break;
	}
	}


}
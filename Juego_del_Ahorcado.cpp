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
	do
	{
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
			bool salir = true;
			while (salir)
			{
				switch (instrucciones())
				{
				case 0:
				{
					instrucciones_VS_computadora();
					break;
				}
				case -1:
				{
					instrucciones_VS_otherPlayer();
					break;
				}
				case -2:
				{
					salir = false;
					break;
				}
				}
			} 
			break;
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
	} while (menu_principal() != -4);



}
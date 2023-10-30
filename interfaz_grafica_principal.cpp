#include "interfaz_grafica_principal.h"

void creador_Fer(int fila, int columna)
{
    rlutil::setColor(rlutil::COLOR::WHITE); //Le da color a las letras 
    rlutil::locate(columna, fila);
    cout << "~ Fernando H.";
}


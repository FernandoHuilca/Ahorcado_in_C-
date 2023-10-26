#include "decoraciones.h"

void dibujo_cuadrado(int columna, int fila, int largo, int ancho)
{
    largo += columna;
    ancho += fila;
    // Línea superior

    for (int i = columna; i <= largo; i++)
    {
        rlutil::locate(i, fila);
        cout << (char)95;
    }
    
    // Líneas verticales izquierda 
    for (int i = fila + 1; i < ancho; i++)
    {
        rlutil::locate(columna - 1, i);
        cout << (char)124;
    }

    // Lineas verticales derecha
    for (int i = fila + 1; i < ancho; i++)
    {
        rlutil::locate(largo + 1, i);
        cout << (char)124;
    }

    // Línea inferior
    for (int i = columna; i <= largo; i++)
    {
        rlutil::locate(i, ancho);
        cout << (char)238;
    }
}
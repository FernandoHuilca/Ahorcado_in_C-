#include "decoraciones.h"

void dibujo_cuadrado(int columna, int fila, int largo, int ancho)
{
    largo += columna;
    ancho += fila;
    // L�nea superior

    for (int i = columna; i <= largo; i++)
    {
        rlutil::locate(i, fila);
        cout << (char)95;
    }
    
    // L�neas verticales izquierda 
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

    // L�nea inferior
    for (int i = columna; i <= largo; i++)
    {
        rlutil::locate(i, ancho);
        cout << (char)238;
    }
}
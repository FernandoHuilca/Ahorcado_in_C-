
#include "animacion_carga_inicio.h"

void animacion_de_carga()
{
    int a = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    rlutil::locate(42, 12);
    cout << "Realizando carga en pantalla..." << endl;

    const int numFrames = 30;
    const int frameDelayMs = 100;

    const char frames[] = { '-', '\\', '|', '/' };

    for (int i = 0; i < numFrames; ++i)
    {

        rlutil::locate(52, 14);
        color(hConsole, a);
        a++;
        cout << "Cargando " << frames[i % 4] << "\r";
        cout.flush();

        this_thread::sleep_for(chrono::milliseconds(frameDelayMs));
        if (a == 15)
        {
            a = 0;
        }
    }
    system("cls");
}
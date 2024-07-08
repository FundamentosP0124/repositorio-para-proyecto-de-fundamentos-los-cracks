#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void opciones(int jugador, int compu) {
    if (jugador == compu) {
        cout << "Es un empate!\n";
    } else if ((jugador == 1 && compu == 3) ||
               (jugador == 2 && compu == 1) ||
               (jugador == 3 && compu == 2)) {
        cout << "Ganaste!\n";
    } else {
        cout << "La computadora gana!\n";
    }
}
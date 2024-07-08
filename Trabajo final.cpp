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

int main() {
    srand(time(0));
    int menu = 0;
    int menu2 = 0;
    bool continuar = true;
    bool continuar2 = true;
    string nombre[100] = {};
    string usuario[100] = {};
    string contrasena[100] = {};
    int indiceUsuario = 0;
    string usuarioTemporal = "";
    string contrasenaTemporal = "";
    bool inicioSesion = false;
    int balance;
    int betAmount;
    int numeroEscogido;
    int numeroRuleta;

      do {
        system("cls");
        cout << "--- BIENVENIDO AL SISTEMA DE REGISTRO E INICIO DE SESION DEL CASINO ---" << endl << endl;
        cout << "1.) Inicio de sesion \n2.) Registro \n3.) Salir \n";
        cin >> menu;
        switch (menu) {
         case 1:
            cout << "Ingresa tu nombre de usuario: ";
            cin >> usuarioTemporal;
            for (int i = 0; i < 100; i++) {
                if (usuarioTemporal == usuario[i]) {
                    do {
                        cout << "Ingrese la contrasena: ";
                        cin >> contrasenaTemporal;
                        if (contrasenaTemporal == contrasena[i]) {
                            inicioSesion = true;
                            break;
                        } else {
                            cout << "Contrasena incorrecta. \n";
                        }
                    } while (true);
                }
            }

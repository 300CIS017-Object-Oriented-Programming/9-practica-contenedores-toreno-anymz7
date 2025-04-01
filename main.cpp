#include <iostream>

#include "src/Jugador.h"
#include "src/Torneo.h"
#include "src/Videojuego.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

   Jugador jugador;
    string nickname;
    int nivelRanking;
    vector<Videojuego*> videojuegosInscritos;

    Torneo torneo;
    vector<Videojuego*> videojuegosDisponibles;
    vector<Jugador*> jugadoresRegistrados;
    int opcion

    Videojuego videojuego;
    int codigo;
    string nombre;
    string genero;
    int nivelDificultad;


    do {
        cout << "\nBattle Arena — Sistema de Gestión de Torneo de eSports\n";
        cout << "\nMenu:\n";
        cout << "1. Registrar un videojuego\n";
        cout << "2. Registrar un jugador\n";
        cout << "3. Inscribir un jugador a un videojuego\n";
        cout << "4. Mostrar los videojuegos en los que participa un jugador\n";
        cout << "5. Calcular el promedio de dificultad de los videojuegos inscritos de un jugador.\n";
        cout << "6. Mostrar el promedio de dificultad de los videojuegos inscritos de un jugador\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

    switch (opcion) {
            case 1:
                cout << ": "; cin >> codigo;
            cin.ignore();
            cout << "Nombre: "; getline(cin, nombre);
            cout << "Genero: "; cin >> genero;
            cout << "Nivel de dificultad: "; cin >> nivelDificultad;
            torneo.registrarVideojuego(codigo, nombre, genero, nivelDificultad);
            break;
            case 2: ; break;
            case 3: ; break;
            case 4: ; break;
            case 5: ; break;
            case 6: ; break;
        }
    } while (opcion != 7);


}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
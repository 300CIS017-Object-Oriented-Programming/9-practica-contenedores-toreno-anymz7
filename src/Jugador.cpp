//
// Created by PC on 1/04/2025.
//
#include <iostream>
#include "Jugador.h"

using namespace std;

Jugador::Jugador(string nick, int nvRanking) {
    nickname = nick;
    if (nvRanking < 1) nivelRanking = 1;
    else if (nvRanking > 100) nivelRanking = 100;
    else nivelRanking = nvRanking;
}

string Jugador::getNickname() { return nickname; }

int Jugador::getNivelRanking() { return nivelRanking;}
std::vector<Videojuego*> Jugador::getvideojuegosInstritos() { return videojuegosInscritos;}

void Jugador::inscritoEn(Videojuego* juego) {
    for (int i = 0; i < videojuegosInscritos.size(); i++) {
        if (videojuegosInscritos[i]->getCodigo() == juego->getCodigo()) return 1;
    }
    return 0;
}
int Jugador::inscribirEnJuego(Videojuego* juego) {
    if (inscritoEn(juego) == 0) {
        videojuegosInscritos.push_back(juego);
        return 1;
    }
    return 0;
}
void Jugador::mostrarVideojuegosDeJugador(nickname) {
    std::cout << "Jugador: " << nickname << " participa en:\n";
    if (videojuegosInscritos.size() == 0) {
        std::cout << "  (No inscrito en ningun videojuego)\n";
    } else {
        for (int i = 0; i < videojuegosInscritos.size(); i++) {
            std::cout << "  - ";
            videojuegosInscritos[i]->mostrarInfoJugador();
        }
    }

}
int Jugador::promedioDificultad() {
    if (videojuegosInscritos.size() == 0) return 0;
    int suma = 0;
    for (int i = 0; i < videojuegosInscritos.size(); i++) {
        suma = suma + videojuegosInscritos[i]->getNivelDificultad();
    }
    return suma / videojuegosInscritos.size();
}
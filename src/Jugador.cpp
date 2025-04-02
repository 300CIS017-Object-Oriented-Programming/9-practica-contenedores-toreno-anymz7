//
// Created by PC on 1/04/2025.
//
#include <iostream>
#include "Jugador.h"

using namespace std;

Jugador::Jugador(string _nickname, int _nivelRanking) {
    nickname = _nickname;
    nivelRanking = _nivelRanking;
}

string Jugador::get_nickname() { return nickname; }

int Jugador::get_nivelRanking() { return nivelRanking; }

void Jugador::mostrarInfoJugador() {
    cout << "Nickname: " << nickname << " | Nivel de habilidad: " << nivelRanking << endl;
}
void Jugador::mostrarVideojuegosDeJugador(nickname) {
    videojuegosInscritos.push_back(Jugador(nickname));
    cout << mostrarVideojuegosDeJugador << endl;

}

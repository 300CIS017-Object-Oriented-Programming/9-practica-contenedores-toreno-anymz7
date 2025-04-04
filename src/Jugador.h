//
// Created by PC on 1/04/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <vector>
#include "Videojuego.h"

using namespace std;


class Jugador {
private:
    string nickname;
    int nivelRanking;
    vector<Videojuego*> videojuegosInscritos;


public:
    Jugador(){}
    Jugador(string _nickname, int _nivelRanking);
    int get_nivelRanking();
    string get_nickname();
    void mostrarInfoJugador();

};


#endif //JUGADOR_H

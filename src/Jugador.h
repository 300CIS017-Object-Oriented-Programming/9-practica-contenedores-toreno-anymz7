//
// Created by PC on 1/04/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>
#include <vector>
#include "Videojuego.h"

using namespace std;


class Jugador {
private:
    std::string nickname;
    int nivelRanking;
    std::vector<Videojuego*> videojuegosInscritos;


public:
    Jugador(){}
    Jugador(string nick, int nvRanking);
    std::string getNickname();
    int getNivelRanking();
    std::vector<Videojuego*> getVideojuegosInscritos();
    int inscritoEn(Videojuego* juego);
    int inscribirEnJuego(Videojuego* juego);
    void mostrarVideojuegosDeJugador();
    void inscribirEnJuego();

};


#endif //JUGADOR_H

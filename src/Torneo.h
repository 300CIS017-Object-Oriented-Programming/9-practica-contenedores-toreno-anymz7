//
// Created by PC on 1/04/2025.
//

#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <vector>
#include <map>


#include "Videojuego.h"
#include "Jugador.h"

using namespace std;


class Torneo {
private:
    map<string, Videojuego*> videojuegosDisponibles;
    map<string, Jugador*> jugadoresRegistrados;


public:
    Torneo () = default;
    string getVideojuegosDisponiblescodigo();
    string getJugadoresRegistrados();
    void mostrarInfoTorneo();

    void registrarVideojuego(int codigo, string nombre, string genero, int nivelDificultad);
    void registrarJugador(string nickname,int nivelRanking);
    void inscribirJugador(string nickname,int codigo);
    void mostrarVideojuegosDeJugador(string nickname);

};

#endif //TORNEO_H

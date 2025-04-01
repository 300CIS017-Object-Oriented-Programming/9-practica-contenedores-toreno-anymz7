//
// Created by PC on 1/04/2025.
//

#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <vector>

#include "Videojuego.h"
#include "Jugador.h"

using namespace std;


class Torneo {
private:
    vector<Videojuego*> videojuegosDisponibles;
    vector<Jugador*> jugadoresRegistrados;
    vector<Videojuego> videojuegos;
    vector<Jugador> jugadores;



public:
    Torneo(vector<Videojuego*> _videojuegosDisponibles, vector<Jugador> _jugadoresRegistrados);
    string getVideojuegosDisponiblescodigo();
    string getJugadoresRegistrados();
    void mostrarInfoTorneo();

};

#endif //TORNEO_H

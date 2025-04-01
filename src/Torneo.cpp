//
// Created by PC on 1/04/2025.
//

#include "Torneo.h"

void Torneo::registrarVideojuego(int codigo, string nombre, string genero, int nivelDificultad) {
    videojuegos.push_back(Videojuego(codigo,nombre,genero,nivelDificultad));
    cout << "Videojuego Registrado!\n";
}
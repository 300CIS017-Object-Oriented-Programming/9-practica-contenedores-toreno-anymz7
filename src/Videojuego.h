//
// Created by PC on 1/04/2025.
//

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include <iostream>
using namespace std;


class Videojuego {
private:
    int codigo;
    string nombre;
    string genero;
    int nivelDificultad;

public:
    Videojuego() = default;

    Videojuego(int _codigo, string _nombre, string _genero, int _nivelDificultad);

    int get_codigo();
    string get_nombre();
    string get_genero();
    int get_nivelDificultad();

    void mostrarInfoJugador();
    void mostrarInfoVideojuego();
};


#endif //VIDEOJUEGO_H

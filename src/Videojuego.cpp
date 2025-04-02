//
// Created by PC on 1/04/2025.
//
#include <iostream>
#include "Videojuego.h"

Videojuego::Videojuego(int _codigo, string _nombre, string _genero, int _nivelDificultad) {
    codigo = _codigo;
    nombre = _nombre;
    genero = _genero;
    nivelDificultad = _nivelDificultad;
}

int Videojuego::get_codigo() { return codigo; }

string Videojuego::get_nombre() { return nombre; }

string Videojuego::get_genero() { return genero; }

int Videojuego::get_nivelDificultad() { return nivelDificultad; }

void Videojuego::mostrarInfoVideojuego() {
    cout << "Codigo: " << codigo << " | Nombre: " << nombre << " | Genero: " << genero << " | Nivel de dificultad: " <<
            nivelDificultad << endl;
}

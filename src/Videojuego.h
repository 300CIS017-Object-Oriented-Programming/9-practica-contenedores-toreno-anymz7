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
    Videojuego(int _codigo, string _nombre);
    int get_codigo();
    string getNombre();
    void mostrarInfoVideojuego();

};



#endif //VIDEOJUEGO_H

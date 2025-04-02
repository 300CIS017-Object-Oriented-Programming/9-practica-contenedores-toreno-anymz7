//
// Created by PC on 1/04/2025.
//

#include "Torneo.h"


void Torneo::registrarVideojuego(int codigo, string nombre, string genero, int nivelDificultad) {

    for (const auto& v : videojuegos) {
        if (v.get_codigo () == codigo) {
            cout << "Error: El videojuego con código: ", codigo, "ya se encuentra registrado.\n";
            return;
        }
    }

    videojuegos.push_back(Videojuego(codigo, nombre,genero,nivelDificultad));
    cout << "Videojuego Registrado!\n";

}
void Torneo::registrarJugador(string nickname,int nivelRanking) {
    //obj
    Jugador* nuevoJugador= new Jugador(nickname,nivelRanking);

    jugadoresRegistrados[nickname] = nuevoJugador;

    cout << "Jugador Registrado!\n";

}



void Torneo::inscribirJugador(string nickname,int codigo) {
    jugadores.push_back(Jugador(nickname));
    videojuegos.push_back(Videojuego(codigo));
    cout << "Jugador Inscrito al juego!\n", codigo;
}


void Torneo::mostrarVideojuegosDeJugador(nickname) {
    jugadores.push_back(Jugador(nickname));
    cout << mostrarVideojuegosDeJugador << endl;

}
void inicializarVideojuegos();

void inicializarJugadores();
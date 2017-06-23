// Mesa de Blackjack.h

#include <string>
#include "Repartidor.h"
#include "Jugador.h"

using namespace std;

#ifndef MESA_H
#define MESA_H

class Mesa
{
	private:
		int numero;
		string tipo;
		Repartidor* repartidor;
		Jugador* jugador;

	public:
		Mesa();
		Mesa(int, int, Repartidor*, Jugador*); // numero, tipo, repartidor, jugador

		// numero
		void setNumero(int);
		int getNumero();

		// tipo
		void setTipo(int);
		string getTipo();

		// repartidor
		void setRepartidor(Repartidor*);
		Repartidor* getRepartidor();

		// jugador
		void setJugador(Jugador*);
		Jugador* getJugador();

		~Mesa();
};

#endif
// Mesa de Blackjack.cpp

#include "Mesa.h"

Mesa::Mesa() { }

Mesa::Mesa(int numero, int tipo, Repartidor* repartidor, Jugador* jugador)
{
	this -> numero = numero;
	setTipo(tipo);
	this -> repartidor = repartidor;
	this -> jugador = jugador;
}

// numero
void Mesa::setNumero(int numero) { this -> numero = numero; }
int Mesa::getNumero() { return numero; }

// tipo
void Mesa::setTipo(int tipo)
{
	if(tipo == 1)
		this -> tipo = "VIP";
	else if(tipo == 2)
		this -> tipo = "Clasica";
	else
		this -> tipo = "Viajero";
}
string Mesa::getTipo() { return tipo; }

// repartidor
void Mesa::setRepartidor(Repartidor* repartidor) { this -> repartidor = repartidor; }
Repartidor* Mesa::getRepartidor() { return repartidor; }

// jugador
void Mesa::setJugador(Jugador* jugador) { this -> jugador = jugador; }
Jugador* Mesa::getJugador() { return jugador; }

Mesa::~Mesa()
{
	delete repartidor, jugador;
}
// Jugador.cpp

#include "Jugador.h"

Jugador::Jugador() { }

Jugador::Jugador(string procedencia, string apodo, double dinero)
{
	this -> procedencia = procedencia;
	this -> apodo = apodo;
	this -> dinero = dinero;
}

Jugador::Jugador(string nombre, int edad, string numeroID, string procedencia, string apodo, double dinero) 
	: Persona(nombre, edad, numeroID)
{
	this -> procedencia = procedencia;
	this -> apodo = apodo;
	this -> dinero = dinero;
}

// procedencia
void Jugador::setProcedencia(string procedencia) { this -> procedencia = procedencia; }
string Jugador::getProcedencia() { return procedencia; }

// apodo
void Jugador::setApodo(string apodo) { this -> apodo = apodo; }
string Jugador::getApodo() { return apodo; }

// dinero
void Jugador::setDinero(double dinero) { this -> dinero = dinero; }
double Jugador::getDinero() { return dinero; }
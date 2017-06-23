// Repartidor.cpp

#include "Repartidor.h"

Repartidor::Repartidor() { }

Repartidor::Repartidor(int dificultad, double dinero, Baraja* baraja)
{
	setDificultad(dificultad);
	this -> dinero = dinero;
	this -> baraja = baraja;
}

Repartidor::Repartidor(string nombre, int edad, string numeroID, int dificultad, double dinero, Baraja* baraja) 
	: Persona(nombre, edad, numeroID)
{
	setDificultad(dificultad);
	this -> dinero = dinero;
	this -> baraja = baraja;
}

// dificultad
void Repartidor::setDificultad(int dificultad)
{
	if(dificultad == 1)
		this -> dificultad = "Dificil";
	else if(dificultad == 2)
		this -> dificultad = "Intermedio";
	else
		this -> dificultad = "Facil";
}
string Repartidor::getDificultad() { return dificultad; }

// dinero
void Repartidor::setDinero(double dinero) { this -> dinero = dinero; }
double Repartidor::getDinero() { return dinero; }

// baraja
void Repartidor::setBaraja(Baraja* baraja) { this -> baraja = baraja; }
Baraja* Repartidor::getBaraja() { return baraja; }

Repartidor::~Repartidor() { delete baraja; }
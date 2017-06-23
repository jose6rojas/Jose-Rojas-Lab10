// Carta.cpp

#include "Carta.h"

Carta::Carta() { }

Carta::Carta(int valor, int palo, bool color)
{
	this -> valor = valor;
	setPalo(palo);
	this -> color = color;
}

// valor
void Carta::setValor(int valor) { this -> valor = valor; }
int Carta::getValor() { return valor; }

// palo
void Carta::setPalo(int palo)
{
	if(palo == 1)
		this -> palo = "espada";
	else if(palo == 2)
		this -> palo = "corazon";
	else if(palo == 3)
		this -> palo = "diamante";
	else
		this -> palo = "trebol";
}
string Carta::getPalo() { return palo; }

// color
void Carta::setColor(bool color) { this -> color = color; }
string Carta::getColor()
{
	if(color)
		return "Negra";
	else
		return "Roja";
}
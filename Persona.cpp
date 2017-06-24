// Persona.cpp

#include "Persona.h"

Persona::Persona() { }

Persona::Persona(string nombre, int edad, string numeroID)
{
	this -> nombre = nombre;
	this -> edad = edad;
	this -> numeroID = numeroID;
}

// nombre
void Persona::setNombre(string nombre) { this -> nombre = nombre; }
string Persona::getNombre() { return nombre; }

// edad
void Persona::setEdad(int edad) { this -> edad = edad; }
int Persona::getEdad() { return edad; }

// numeroID
void Persona::setNumeroID(string numeroID) { this -> numeroID = numeroID; }
string Persona::getNumeroID() { return numeroID; }

void Persona::debug() { }
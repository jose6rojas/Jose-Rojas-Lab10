// Jugador.h

#include <string>
#include "Persona.h"

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador : public Persona
{
	private:
		string procedencia;
		string apodo;
		double dinero;

	public:
		Jugador();
		Jugador(string, string, double); // procedencia, apodo, dinero
		Jugador(string, int, string, string, string, double);
		// nombre, edad, numeroID, procedencia, apodo, dinero

		// procedencia
		void setProcedencia(string);
		string getProcedencia();

		// apodo
		void setApodo(string);
		string getApodo();

		// dinero
		void setDinero(double);
		double getDinero();
};

#endif
// Repartidor.h

#include <string>
#include "Persona.h"
#include "Baraja.h"

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H

class Repartidor : public Persona
{
	private:
		string dificultad;
		double dinero;
		Baraja* baraja;

	public:
		Repartidor();
		Repartidor(int, double, Baraja*); // dificultad, dinero, baraja
		Repartidor(string, int, string, int, double, Baraja*);
		// nombre, edad, numeroID, dificultad, dinero, baraja

		// dificultad
		void setDificultad(int);
		string getDificultad();

		// dinero
		void setDinero(double);
		double getDinero();

		// baraja
		void setBaraja(Baraja*);
		Baraja* getBaraja();

		~Repartidor();
};

#endif
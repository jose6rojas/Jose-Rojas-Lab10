// Baraja.h

#include <vector>
#include "Carta.h"

using namespace std;

#ifndef BARAJA_H
#define BARAJA_H

class Baraja
{
	private:
		vector<Carta*> deck;

	public:
		Baraja();

		void setCarta(Carta*);
		Carta* getCarta(int);

		~Baraja();
};

#endif
// Carta.h

#include <string>

using namespace std;

#ifndef CARTA_H
#define CARTA_H

class Carta
{
	private:
		int valor;
		string palo;
		bool color; // negra o roja

	public:
		Carta();
		Carta(int, int, bool); // valor, palo, color

		// valor
		void setValor(int);
		int getValor();

		// palo
		void setPalo(int);
		string getPalo();

		// color
		void setColor(bool);
		string getColor();
};

#endif
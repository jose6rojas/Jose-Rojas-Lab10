// Baraja.cpp

#include "Baraja.h"

Baraja::Baraja()
{
	// Llena la Baraja con Cartas

	// Trebol, 0 - 12
    deck.push_back(new Carta(11, 4, true)); // A
    deck.push_back(new Carta(2, 4, true)); // 2
    deck.push_back(new Carta(3, 4, true)); // 3
    deck.push_back(new Carta(4, 4, true)); // 4
    deck.push_back(new Carta(5, 4, true)); // 5
    deck.push_back(new Carta(6, 4, true)); // 6
    deck.push_back(new Carta(7, 4, true)); // 7
    deck.push_back(new Carta(8, 4, true)); // 8
    deck.push_back(new Carta(9, 4, true)); // 9
    deck.push_back(new Carta(10, 4, true)); // 10
    deck.push_back(new Carta(10, 4, true)); // J - 10
    deck.push_back(new Carta(10, 4, true)); // Q - 10
    deck.push_back(new Carta(10, 4, true)); // K - 10
    // Corazones, 13 - 25
    deck.push_back(new Carta(11, 2, false)); // A
    deck.push_back(new Carta(2, 2, false)); // 2
    deck.push_back(new Carta(3, 2, false)); // 3
    deck.push_back(new Carta(4, 2, false)); // 4
    deck.push_back(new Carta(5, 2, false)); // 5
    deck.push_back(new Carta(6, 2, false)); // 6
    deck.push_back(new Carta(7, 2, false)); // 7
    deck.push_back(new Carta(8, 2, false)); // 8
    deck.push_back(new Carta(9, 2, false)); // 9
    deck.push_back(new Carta(10, 2, false)); // 10
    deck.push_back(new Carta(10, 2, false)); // J - 10
    deck.push_back(new Carta(10, 2, false)); // Q - 10
    deck.push_back(new Carta(10, 2, false)); // K - 10
	// Espadas, 26 - 38
    deck.push_back(new Carta(11, 1, true)); // A
    deck.push_back(new Carta(2, 1, true)); // 2
    deck.push_back(new Carta(3, 1, true)); // 3
    deck.push_back(new Carta(4, 1, true)); // 4
    deck.push_back(new Carta(5, 1, true)); // 5
    deck.push_back(new Carta(6, 1, true)); // 6
    deck.push_back(new Carta(7, 1, true)); // 7
    deck.push_back(new Carta(8, 1, true)); // 8
    deck.push_back(new Carta(9, 1, true)); // 9
    deck.push_back(new Carta(10, 1, true)); // 10
    deck.push_back(new Carta(10, 1, true)); // J - 10
    deck.push_back(new Carta(10, 1, true)); // Q - 10
    deck.push_back(new Carta(10, 1, true)); // K - 10
    // Diamantes, 39 - 51
    deck.push_back(new Carta(11, 3, false)); // A
    deck.push_back(new Carta(2, 3, false)); // 2
    deck.push_back(new Carta(3, 3, false)); // 3
    deck.push_back(new Carta(4, 3, false)); // 4
    deck.push_back(new Carta(5, 3, false)); // 5
    deck.push_back(new Carta(6, 3, false)); // 6
    deck.push_back(new Carta(7, 3, false)); // 7
    deck.push_back(new Carta(8, 3, false)); // 8
    deck.push_back(new Carta(9, 3, false)); // 9
    deck.push_back(new Carta(10, 3, false)); // 10
    deck.push_back(new Carta(10, 3, false)); // J - 10
    deck.push_back(new Carta(10, 3, false)); // Q - 10
    deck.push_back(new Carta(10, 3, false)); // K - 10
}

void Baraja::setCarta(Carta* carta) { deck.push_back(carta); }
Carta* Baraja::getCarta(int i) { return deck[i]; }

Baraja::~Baraja()
{
	for(int i; i < deck.size(); i++)
		delete deck[i];
	deck.clear();
}
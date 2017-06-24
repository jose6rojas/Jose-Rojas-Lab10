// Persona.h

#include <string>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
	protected:
		string nombre;
		int edad;
		string numeroID; // solamente lleva cuatro numeros

	public:
		Persona();
		Persona(string, int, string); // nombre, edad, numeroID

		// nombre
		void setNombre(string);
		string getNombre();

		// edad
		void setEdad(int);
		int getEdad();

		// numeroID
		void setNumeroID(string);
		string getNumeroID();

		virtual void debug();
};

#endif
// Administrador.h

#include <string>
#include "Persona.h"

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador : public Persona
{
	private:
		int experienciaLaboral;
		string rango;
		double sueldo;

	public:
		Administrador();
		Administrador(int, int, double); // experienciaLaboral, rango, sueldo
		Administrador(string, int, string, int, int, double);
		// nombre, edad, numeroID, experienciaLaboral, rango, sueldo

		// experienciaLaboral
		void setExperienciaLaboral(int);
		int getExperienciaLaboral();

		// rango
		void setRango(int);
		string getRango();

		// sueldo
		void setSueldo(double);
		double getSueldo();
};

#endif
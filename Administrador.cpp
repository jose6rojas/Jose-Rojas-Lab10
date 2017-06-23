// Administrador.cpp

#include "Administrador.h"

Administrador::Administrador() { }

Administrador::Administrador(int experienciaLaboral, int rango, double sueldo)
{
	this -> experienciaLaboral = experienciaLaboral;
	setRango(rango);
	this -> sueldo = sueldo;
}

Administrador::Administrador(string nombre, int edad, string numeroID, 
	int experienciaLaboral, int rango, double sueldo) : Persona(nombre, edad, numeroID)
{
	this -> experienciaLaboral = experienciaLaboral;
	setRango(rango);
	this -> sueldo = sueldo;
}

// experienciaLaboral
void Administrador::setExperienciaLaboral(int experienciaLaboral) { this -> experienciaLaboral = experienciaLaboral; }
int Administrador::getExperienciaLaboral() { return experienciaLaboral; }

// rango
void Administrador::setRango(int rango)
{
	if(rango == 1)
		this -> rango = "Gerente Tiempo Completo";
	else if(rango == 2)
		this -> rango = "Gerente Medio-Tiempo";
	else
		this -> rango = "Gerente General";
}
string Administrador::getRango() { return rango; }

// sueldo
void Administrador::setSueldo(double sueldo) { this -> sueldo = sueldo; }
double Administrador::getSueldo() { return sueldo; }
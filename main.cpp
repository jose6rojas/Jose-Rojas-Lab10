// viernes, 23 de junio de 2017
// Examen II - Laboratorio de Programacion III
// Jose Carlos Rojas Herrera - 11541234

#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "Administrador.h"
#include "Repartidor.h"
#include "Jugador.h"
#include "Mesa.h"
#include "Baraja.h"
#include "Carta.h"

using namespace std;

int main(int argc, char const *argv[])
{
	vector<Persona*> personas;
	vector<Mesa*> mesas;

	// Administrador por defecto
	Administrador* admin = new Administrador("admin", 23, "1234", 30, 1, 50000.00);
	personas.push_back(admin);

	// Log In
	int op_principal = 0;
	while(op_principal != 5)
	{
		cout << "Menu Principal" << endl;
		cout << "1. Agregar una Persona" << endl;
		cout << "2. Log In como Administrador" << endl;
		cout << "3. Log In como Jugador" << endl;
		cout << "4. Visualizar Personas" << endl;
		cout << "5. Salir" << endl;
		cout << "Escoja una opcion: ";
		cin >> op_principal;
		if(op_principal == 1) // Agregar una Persona
		{
			int op_agregar = 0;
			while(op_agregar != 4)
			{
				cout << "Agregar una Persona" << endl;
				cout << "1. Agregar un Administrador" << endl;
				cout << "2. Agregar un Jugador" << endl;
				cout << "3. Agregar un Repartidor" << endl;
				cout << "4. Regresar al Menu Principal" << endl;
				cout << "Escoja una opcion: ";
				cin >> op_agregar;
				if(op_agregar == 1) // Agregar un Administrador
				{
					// Atributos de Persona
					string nombre, numeroID;
					int edad;
					cout << "Ingrese su nombre: ";
					cin >> nombre;
					cout << "Ingrese su edad: ";
					cin >> edad;
					cout << "Ingrese su numero de identificacion (<= 4): ";
					cin >> numeroID;
					while(numeroID.length() > 4)
					{
						cout << "Debe ingresar un numero de identifacion mas corto (<= 4): ";
						cin >> numeroID;
					}

					// Atributos de Administrador
					int experienciaLaboral;
					int rango;
					double sueldo;
					cout << "Ingrese su experiencia laboral (numero): ";
					cin >> experienciaLaboral;
					cout << "Rango\n1. Gerente a Tiempo Completo\n2. Gerente a Medio-Tiempo\n3. Gerente General" << endl;
					cout << "Escoja su rango: ";
					cin >> rango;
					cout << "Ingrese su sueldo (Lps.): ";
					cin >> sueldo;

					Administrador* administrador = new Administrador(nombre, edad, numeroID, experienciaLaboral, rango, 
						sueldo);
					personas.push_back(administrador);
					cout << "Administrador agregado correctamente." << endl;
				}
				else if(op_agregar == 2) // Agregar un Jugador
				{
					// Atributos de Persona
					string nombre, numeroID;
					int edad;
					cout << "Ingrese su nombre: ";
					cin >> nombre;
					cout << "Ingrese su edad: ";
					cin >> edad;
					cout << "Ingrese su numero de identificacion (<= 4): ";
					cin >> numeroID;
					while(numeroID.length() > 4)
					{
						cout << "Debe ingresar un numero de identifacion mas corto (<= 4): ";
						cin >> numeroID;
					}

					// Atributos de Jugador
					string procedencia, apodo;
					double dinero;
					cout << "Ingrese su procedencia: ";
					cin >> procedencia;
					cout << "Ingrese su apodo: ";
					cin >> apodo;
					cout << "Ingrese su dinero (Lps.): ";

					Jugador* jugador = new Jugador(nombre, edad, numeroID, procedencia, apodo, dinero);
					personas.push_back(jugador);
					cout << "Jugador agregado correctamente." << endl;
				}
				else if(op_agregar == 3) // Agregar un Repartidor
				{
					// Atributos de Persona
					string nombre, numeroID;
					int edad;
					cout << "Ingrese su nombre: ";
					cin >> nombre;
					cout << "Ingrese su edad: ";
					cin >> edad;
					cout << "Ingrese su numero de identificacion (<= 4): ";
					cin >> numeroID;
					while(numeroID.length() > 4)
					{
						cout << "Debe ingresar un numero de identifacion mas corto (<= 4): ";
						cin >> numeroID;
					}

					// Atributos de Repartidor
					int dificultad;
					double dinero;
					cout << "Dificultad\n1. Dificil\n2. Intermedio\n3. Facil\nEscoja una opcion: ";
					cin >> dificultad;
					cout << "Ingrese su dinero (Lps.): ";
					cin >> dinero;

					Repartidor* repartidor = new Repartidor(nombre, edad, numeroID, dificultad, dinero, new Baraja());
					personas.push_back(repartidor);
					cout << "Repartidor agregado correctamente." << endl;
				}
				else if(op_agregar == 4) // Regresar al Menu Principal
				{ }
				else
				{
					cout << "Debe escoger una opcion valida." << endl;
				}
			}
		}
		else if(op_principal == 2) // Log In como Administrador
		{

		}
		else if(op_principal == 3) // Log In como Jugador
		{

		}
		else if(op_principal == 4) // Visualizar Personas
		{

		}
		else if(op_principal == 5) // Salir
		{ }
		else
		{
			cout << "Debe escoger una opcion valida." << endl;
		}
	}

	// Limpia el vector de Personas
	for(int i = 0; i < personas.size(); i++)
		delete personas[i];
	personas.clear();

	// Limpia el vector de Mesas
	for(int i = 0; i < mesas.size(); i++)
		delete mesas[i];
	mesas.clear();

	return 0;
}
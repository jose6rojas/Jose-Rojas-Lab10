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

	Jugador* P1 = new Jugador("Jose", 20, "2347", "TGU", "Rojas", 300.00);
	personas.push_back(P1);
	Repartidor* P2 = new Repartidor("Carlos", 20, "0000", 1, 500.00, new Baraja());
	personas.push_back(P2);

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
					cin >> dinero;

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
			// Revisa si esta en el vector
			string nombre, numeroID;
			cout << "Ingrese su nombre: ";
			cin >> nombre;
			cout << "Ingrese su numero de identificacion: ";
			cin >> numeroID;
			int cont = 0;
			Administrador* administrador;
			for(int i = 0; i < personas.size(); i++)
			{
				if(dynamic_cast<Administrador*> (personas[i]))
				{
					administrador = dynamic_cast<Administrador*> (personas[i]);
					if(nombre == administrador -> getNombre() && numeroID == administrador -> getNumeroID())
						cont++;
				}
			}
			// Si lo encuentra, sigue, sino, regresa al Menu Principal
			if(cont == 0)
			{
				cout << "No se encontro un Administrador con estos datos." << endl;
			}
			else
			{
				int op_admin = 0;
				while(op_admin != 4)
				{
					cout << "Log In como Administrador" << endl;
					cout << "1. Crear Mesas" << endl;
					cout << "2. Modificar Mesas" << endl;
					cout << "3. Eliminar Mesas" << endl;
					cout << "4. Regresar al Menu Principal" << endl;
					cout << "Escoja una opcion: ";
					cin >> op_admin;
					if(op_admin == 1) // Crear Mesas
					{
						Mesa* mesa;

						// Revisa que haya por lo menos 1 Jugador y 1 Repartidor
						int cont1 = 0;
						int cont2 = 0;
						for(int i = 0; i < personas.size(); i++)
						{
							if(dynamic_cast<Jugador*> (personas[i]))
								cont1++;
							else if(dynamic_cast<Repartidor*> (personas[i]))
								cont2++;
						}
						if(cont1 > 0 && cont2 > 0)
						{
							// Escoge al Jugador
							Jugador* jugador;
							cout << "Jugadores" << endl;
							for(int i = 0; i < personas.size(); i++)
							{
								if(dynamic_cast<Jugador*> (personas[i]))
								{
									jugador = dynamic_cast<Jugador*> (personas[i]);
									cout << i << ". Jugador: ";
									cout << jugador -> getNombre() << endl;
								}
							}

							int op_jugador;
							cout << "Escoja un Jugador: ";
							cin >> op_jugador;
							if(op_jugador < 0 || op_jugador >= personas.size())
							{
								cout << "Debe escoger un valor valido." << endl;
								break;
							}
							else
							{
								if(dynamic_cast<Jugador*> (personas[op_jugador]))
								{
									jugador = dynamic_cast<Jugador*> (personas[op_jugador]);
									mesa -> setJugador(jugador);
								}
								else
								{
									cout << "La Persona que escogio no es un Jugador." << endl;
									break;
								}
							}

							// Escoge al Repartidor
							Repartidor* repartidor;
							cout << "Repartidores" << endl;
							for(int i = 0; i < personas.size(); i++)
							{
								if(dynamic_cast<Repartidor*> (personas[i]))
								{
									repartidor = dynamic_cast<Repartidor*> (personas[i]);
									cout << i << ". Repartidores: ";
									cout << repartidor -> getNombre() << endl;
								}
							}

							int op_repartidor;
							cout << "Escoja un Repartidor: ";
							cin >> op_repartidor;
							if(op_repartidor < 0 || op_repartidor >= personas.size())
							{
								cout << "Debe escoger un valor valido." << endl;
								break;
							}
							else
							{
								if(dynamic_cast<Repartidor*> (personas[op_repartidor]))
								{
									repartidor = dynamic_cast<Repartidor*> (personas[op_repartidor]);
									mesa -> setRepartidor(repartidor);
								}
								else
								{
									cout << "La Persona que escogio no es un Repartidor." << endl;
									break;
								}
							}

							int numero;
							cout << "Ingrese el numero de Mesa: ";
							cin >> numero;
							int tipo;
							cout << "Tipo\n1. VIP\n2. Clasica\n3. Viajera\nEscoja una opcion: ";
							cin >> tipo;

							mesa -> setNumero(numero);
							mesa -> setTipo(tipo);

							mesas.push_back(mesa);
							cout << "Mesa agregada correctamente." << endl;
						}
						else
						{
							cout << "Debe haber por lo menos 1 Jugador y 1 Repartidor para agregar una Mesa." << endl;
						}
					}
					else if(op_admin == 2) // Modificar Mesas
					{
						cout << "Mesas" << endl;
						for(int i = 0; i < mesas.size(); i++)
							cout << i << ". Mesa #" << mesas[i] -> getNumero() << endl;
						int op_mesa;
						cout << "Escoja una Mesa para modificar: ";
						cin >> op_mesa;
						if(op_mesa < 0 || op_mesa >= mesas.size())
						{
							cout << "Debe escoger una valor valido." << endl;
						}
						else
						{
							Mesa* M;
							M = mesas[op_mesa];

							int numero;
							cout << "Ingrese un nuevo numero de Mesa: ";
							cin >> numero;
							int tipo;
							cout << "Tipo\n1. VIP\n2. Clasica\n3. Viajera\nEscoja una opcion: ";
							cin >> tipo;

							M -> setNumero(numero);
							M -> setTipo(tipo);

							cout << "La Mesa fue modificada correctamente." << endl;
						}
					}
					else if(op_admin == 3) // Eliminar Mesas
					{
						cout << "Mesas" << endl;
						for(int i = 0; i < mesas.size(); i++)
							cout << i << ". Mesa #" << mesas[i] -> getNumero() << endl;
						int op_mesa;
						cout << "Escoja una Mesa para modificar: ";
						cin >> op_mesa;
						if(op_mesa < 0 || op_mesa >= mesas.size())
						{
							cout << "Debe escoger una valor valido." << endl;
						}
						else
						{
							// mesas.erase(mesas.begin() + op_mesa);
							cout << "La Mesa fue eliminada correctamente." << endl;
						}
					}
					else if(op_admin == 4) // Regresar al Menu Principal
					{ }
					else
					{
						cout << "Debe escoger una opcion valida." << endl;
					}
				}
			}
		}
		else if(op_principal == 3) // Log In como Jugador
		{

		}
		else if(op_principal == 4) // Visualizar Personas
		{
			Administrador* administrador;
			Jugador* jugador;
			Repartidor* repartidor;
			cout << "Personas" << endl;
			for(int i = 0; i < personas.size(); i++)
			{
				if(dynamic_cast<Administrador*> (personas[i]))
				{
					administrador = dynamic_cast<Administrador*> (personas[i]);
					cout << i << ". Administrador: ";
					cout << administrador -> getNombre() << endl;
				}
				else if(dynamic_cast<Jugador*> (personas[i]))
				{
					jugador = dynamic_cast<Jugador*> (personas[i]);
					cout << i << ". Jugador: ";
					cout << jugador -> getNombre() << endl;
				}
				else
				{
					repartidor = dynamic_cast<Repartidor*> (personas[i]);
					cout << i << ". Repartidor: ";
					cout << repartidor -> getNombre() << endl;
				}
			}
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
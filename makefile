main:	main.o Persona.o Administrador.o Repartidor.o Jugador.o Mesa.o Baraja.o Carta.o
	g++	main.o Persona.o Administrador.o Repartidor.o Jugador.o Mesa.o Baraja.o Carta.o -o exe

main.o:	main.cpp Persona.h Administrador.h Repartidor.h Jugador.h Mesa.h Baraja.h Carta.h
	g++	-c main.cpp

Persona.o:	Persona.h Persona.cpp
	g++	-c Persona.cpp

Administrador.o:	Persona.h Administrador.h Administrador.cpp
	g++ -c Administrador.cpp

Repartidor.o:	Persona.h Repartidor.h Repartidor.cpp
	g++	-c Repartidor.cpp

Jugador.o:	Persona.h Jugador.h Jugador.cpp
	g++	-c Jugador.cpp

Mesa.o:	Repartidor.h Jugador.h Mesa.h Mesa.cpp
	g++ -c Mesa.cpp

Baraja.o:	Carta.h Baraja.h Baraja.cpp
	g++	-c Baraja.cpp

Carta.o:	Carta.h Carta.cpp
	g++	-c Carta.cpp

Clean:
	rm -f *.o exe
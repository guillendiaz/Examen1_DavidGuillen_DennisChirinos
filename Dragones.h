#pragma once
#include <string>
using namespace std;
class Dragones {
	private:
	string Nombre;
	string Color;
	int Tamaño;
	int Distancia;
	int Ataque;
	int Defensa;
	
	public:
	string getNombre();
	string getColor();
	int getAtaque();
	int getDefensa();
	int getDistancia();
	int getTamaño();
	void setNombre(string);
	void setColor(string);
	void setTamaño(int);
	void setDistancia(int);	
	void setAtaque(int);
	void setDefensa(int);
	
};

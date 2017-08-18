#pragma once
#include <string>
using namespace std;
class Dragones {
	private:
		string Nombre;
		string Color;
		int Tamanio;
		int Distancia;
		int Ataque;
		int Defensa;
	
	public:
		Dragones();
		Dragones(string, string, int, int, int, int)
		string getNombre();
		string getColor();
		int getAtaque();
		int getDefensa();
		int getDistancia();
		int getTamanio();
		void setNombre(string);
		void setColor(string);
		void setTamanio(int);
		void setDistancia(int);	
		void setAtaque(int);
		void setDefensa(int);	
};

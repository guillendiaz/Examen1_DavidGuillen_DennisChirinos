#pragma once

#include <string>
using namespace std;

class Dothraki{
	private:
		string Nombre;
		string JefeBarbaro;
		string NombreCaballo;
		string ColorCaballo;
		int Ataque;
		int Defensa;
	public:
		Dothraki();
		Dothraki(string, string, string, string, int, int);
		void setNombre(string);
		string getNombre();
		void setJefebarbaro(string);
		string getJefebarbaro();
		void setNombrecaballo(string);
		string getNombrecaballo();
		void setColorcaballo(string);
		string getColorcaballo();
		void setAtaque(int);
		int getAtaque();
		void setDefensa(int);
		int getDefensa();

};

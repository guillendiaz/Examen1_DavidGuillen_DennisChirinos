#pragma once
#include <string>
using namespace std;
class PequeniaFamiliaNoble {
	private:
	string Nombre;
	string Simbolo;
	string Lema;
	int Ataque;
	int Defensa;
	
	public:
	string getNombre();
	string getSimbolo();
	string getLema();
	int getAtaque();
	int getDefensa();
	void setNombre(string);
	void setSimbolo(string);
	void setLema(string);
	void setAtaque(int);
	void setDefensa(int);
	
};

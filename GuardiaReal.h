#pragma once
#include <string>
using namespace std;
class GuardiaReal {
	private:
	string Nombre;
	string Tipo;
	int Edad;
	
	public:
	string getNombre();
	string getTipo();
	int getEdad();
	
	void setNombre(string);
	void setTipo(string);
	void setEdad(int);
};

#include "GuardiaReal.h"
#include <string>
using namespace std;

	string GuardiaReal::getNombre(){
		return this->Nombre;
	}
	string GuardiaReal::getTipo(){
		return this->Tipo;
	}
	int GuardiaReal::getEdad(){
		return this->Edad;
	}
	
	void GuardiaReal::setNombre(string a){
		this->Nombre = a;
	}
	void GuardiaReal::setTipo(string a){
		this->Tipo = a;
	}
	void GuardiaReal::setEdad(int a){
		this->Edad = a;
	}

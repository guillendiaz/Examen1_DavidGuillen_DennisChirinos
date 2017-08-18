#include "Dothraki.h"
#include <string>
using namespace std;

Dothraki::Dothraki(){
	
}

void Dothraki::setNombre(string pNombre){
	this->Nombre = pNombre;
}
string Dothraki::getNombre(){
	return Nombre;
}

void Dothraki::setJefebarbaro(string pJefeBarbaro){
	this->JefeBarbaro = pJefeBarbaro;
}
string Dothraki::getJefebarbaro(){
	return JefeBarbaro;
}

void Dothraki::setNombrecaballo(string pNombreCaballo){
	this->NombreCaballo = pNombreCaballo;
}
string Dothraki::getNombrecaballo(){
	return NombreCaballo;
}

void Dothraki::setColorcaballo(string pColorCaballo){
	this->ColorCaballo = pColorCaballo;
}
string Dothraki::getColorcaballo(){
	return ColorCaballo;
}


void Dothraki::setAtaque(int pAtaque){
	this->Ataque = pAtaque;
}
int Dothraki::getAtaque(){
	return Ataque;
}

void Dothraki::setDefensa(int pDefensa){
	this->Defensa = pDefensa;
}
int Dothraki::getDefensa(){
	return Defensa;
}

#include <string>
#include "Dragones.h"
using namespace std;
	Dragones::Dragones(){

	}
	Dragones::Dragones(string pNombre, string pColor, int pTamanio, int pDistancia, int pAtaque, int pDefensa){
		Nombre = pNombre;
		Color = pColor;
		Tamanio = pTamanio;
		Distancia = pDistancia;
		Ataque = pAtaque;
		Defensa = pDefensa;
	}
	string Dragones::getNombre(){
		return this->Nombre;	
	}
	string Dragones::getColor(){
		return this->Color;
	}
	int Dragones::getAtaque(){
		return this->Ataque;
	}
	int Dragones::getDefensa(){
		return this->Defensa;
	}
	int Dragones::getDistancia(){
		return this->Distancia;
	}
	int Dragones::getTamanio(){
		return this->Tamanio;
	}
	void Dragones::setNombre(string a){
		this->Nombre = a;
	}
	void Dragones::setColor(string a){
		this->Color = a;
	}
	void Dragones::setTamanio(int a){
		this->Tamanio = a;
	}
	void Dragones::setDistancia(int a){
		this->Distancia = a;
	}	
	void Dragones::setAtaque(int a){
		this->Ataque = a;
	}
	void Dragones::setDefensa(int a){
		this->Defensa = a;
	}

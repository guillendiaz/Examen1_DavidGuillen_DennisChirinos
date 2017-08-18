#include <string>
#include <stdlib.h>
#include <iostream>
#include "PequeniaFamiliaNoble.h"
using namespace std;
	string PequeniaFamiliaNoble::getNombre(){
		return this-> Nombre;
	}
	string PequeniaFamiliaNoble::getSimbolo(){
		return this-> Simbolo;
	}
	string PequeniaFamiliaNoble::getLema(){
		return this-> Lema;
	}
	int PequeniaFamiliaNoble::getAtaque(){
		return this-> Ataque;
	}
	int PequeniaFamiliaNoble::getDefensa(){
		return this-> Defensa;
	}
	void PequeniaFamiliaNoble::setNombre(string a){
		this->Nombre = a;
	}
	void PequeniaFamiliaNoble::setSimbolo(string a){
		this->Simbolo = a;
	}
	void PequeniaFamiliaNoble::setLema(string a){
		this->Lema = a;
	}
	void PequeniaFamiliaNoble::setAtaque(int a){
		this->Ataque = a;	
	}
	void PequeniaFamiliaNoble::setDefensa(int a){
		this->Defensa = a;
	}
	

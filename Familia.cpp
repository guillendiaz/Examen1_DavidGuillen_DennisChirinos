#include "Familia.h"
#include <string>
using namespace std;

	string Familia::getJefe(){
		return this->Jefe;		
	}
	string Familia::getLema(){
		return this->Lema;
	}
	string Familia::getAnimalEmb(){
		return this->AnimalEmb;
	}
	void Familia::setJefe(string a){
		this->Jefe = a;
	}
	void Familia::setLema(string a){
		this->Lema = a;
	}
	void Familia::setAnimalEmb(string a){
		this->AnimalEmb = a;	
	}
	Familia::Familia(string a, string b, string c){
		this->Jefe = a;
		this->Lema = b;
		this->AnimalEmb = c;
	}
	Familia::~Familia(){

	}

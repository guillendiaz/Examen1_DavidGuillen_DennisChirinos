#include "Targaryen.h"
#include <string>
#include "Familia.h"
#include "Dragones.h"
#include "Dothraki.h"
#include <vector>
using namespace std;

Targaryen::Targaryen(){

}

Targaryen::Targaryen(int p){
	Barcos = p;
}

int Targaryen::getBarcos(){
	return this->Barcos;
}
vector<Dragones*> Targaryen::getDrag() {
	return this->Drag;
}
vector<Dothraki*> Targaryen::getDoth(){
	return this->Doth;
}
void Targaryen::setBarcos(int a){
	this->Barcos = a;
}

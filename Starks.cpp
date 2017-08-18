#include "Starks.h"
#include <string>
#include "Familia.h"
#include "PequeniaFamiliaNoble.h"
#include <vector>
using namespace std;
		Starks::Starks(string Jefe, string Lema, string AnimalEmb, int a, string b, int c) {
			setJefe(Jefe);
			setLema(Lema);
			setAnimalEmb(AnimalEmb);		
			this->Lobos = a;
			this->Guerrero = b;
			this->Integrantes = c;
		}
		int Starks::getLobos(){
			return this->Lobos;
		}
		string Starks::getGuerrero(){
			return this->Guerrero;
		}
		int Starks::getIntegrantes(){
		return this->Integrantes;
		}
		vector<PequeniaFamiliaNoble*> Starks::getvPFR() {
		return this->vPFR;
		}
		void Starks::setLobos(int a){
		this->Lobos = a;
		}
		void Starks::setGuerrero(string a){
		this->Guerrero = a;
		}
		void Starks::setIntegrantes(int a){
		this->Integrantes = a;
		}

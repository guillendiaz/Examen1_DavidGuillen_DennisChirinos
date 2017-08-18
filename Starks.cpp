#include "Starks.h"
#include <string>
#include "Familia.h"
#include "PequeniaFamiliaNoble.h"
#include <vector>
using namespace std;

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

#pragma once
#include <string>
#include "Familia.h"
#include "PequeniaFamiliaReal.h"
#include <vector>
using namespace std;

class Starks : public Familia{
	private:
		int Lobos;
		string Guerrero;
		int Integrantes;
		vector<PequeniaFamiliaReal*> vPFR;
	public:
		int getLobos();
		string getGuerrero();
		int getIntegrantes();
		vector<PequeniaFamiliaReal*> getvPFR();
		void setLobos(int);
		void setGuerrero(string);
		void setIntegrantes(int);
};

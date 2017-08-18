#pragma once
#include <string>
#include "Familia.h"
#include "PequeniaFamiliaNoble.h"
#include <vector>
using namespace std;

class Starks : public Familia{
	private:
		int Lobos;
		string Guerrero;
		int Integrantes;
		vector<PequeniaFamiliaNoble*> vPFR;
	public:
		int getLobos();
		string getGuerrero();
		int getIntegrantes();
		vector<PequeniaFamiliaNoble*> getvPFR();
		void setLobos(int);
		void setGuerrero(string);
		void setIntegrantes(int);
		Starks(string,string,string,int, string, int);
};

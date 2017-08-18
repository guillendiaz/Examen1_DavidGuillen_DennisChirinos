#pragma once
#include <string>
#include "Familia.h"
#include "GuardiaReal.h"
#include <vector>
using namespace std;

class Lannister : public Familia{
	private:
		int Dinero;
		int Montania;
		int Integrantes;
		vector<GuardiaReal*> vGR;
	public:
		int getDinero();
		int getMontania();
		int getIntegrantes();
		vector<GuardiaReal*> getvGR();
		
		void setIntegrantes(int);
		void setDinero(int);
		void setMontania(int);
};

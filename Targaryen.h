#pragma once
#include "Familia.h"
#include "Dothraki.h"
#include "Dragones.h"
#include <string>
#include <vector>
using namespace std;

class Targaryen : public Familia{
	private:
		int Barcos;
		vector<Dothraki*> vDoth;
		vector<Dragones*> vDrag;
	public:
		Targaryen();
		Targaryen(int);
		int getBarcos();
		vector<Dothraki*> getDoth();
		vector<Dragones*> getDrag();
		void setBarcos(int);
};

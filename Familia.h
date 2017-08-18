#pragma once
#include <string>
using namespace std;
class Familia {
	private:
		string Jefe;
		string Lema;
		string AnimalEmb;
	public:
		string getJefe();
		string getLema();
		string getAnimalEmb();
		void setJefe(string);
		void setLema(string);
		void setAnimalEmb(string);
		
};

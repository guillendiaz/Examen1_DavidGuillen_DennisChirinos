#pragma once
#include <string>
using namespace std;
class Familia {
	public:
		string Jefe;
		string Lema;
		string AnimalEmb;
		//Familia(string, string, string);
		//~Familia();
	private:
		string getJefe();
		string getLema();
		string getAnimalEmb();
		void setJefe(string);
		void setLema(string);
		void setAnimalEmb(string);
		
};

#include "Lannister.h"
#include <string>
#include "Familia.h"
#include "GuardiaReal.h"
#include <vector>
using namespace std;

		int Lannister::getDinero(){
			return this->Dinero;
		}
		int Lannister::getMontania(){
			return this->Montania;
		}
		int Lannister::getIntegrantes(){
			return this->Integrantes;
		}
		vector<GuardiaReal*> Lannister::getvGR(){
			return this->vGR;
		}
		
		void Lannister::setIntegrantes(int a){
		this->Integrantes=a;
		}
		void Lannister::setDinero(int a){
		this->Dinero=a;
		}
		void Lannister::setMontania(int a){
		this->Montania=a;
		}

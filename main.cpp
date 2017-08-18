#include <string>
#include <iostream>
#include "Dragones.h"
#include "Familia.h"
#include "Lannister.h"
#include "Starks.h"
#include "GuardiaReal.h"
#include "Dothraki.h"
#include "PequeniaFamiliaNoble.h"
#include <vector>
#include "Targaryen.h"
void menu();
using namespace std;
int main(){
	int op = 0;
	int fam_op;
	int op2;
	int op3;
	int op4;
	Starks* fStark = new Starks();
	Lannister* fLan = new Lannister();
	Targaryen* fTar = new Targaryen();
	while (op != 6) {
	menu();
	switch (op) {
		case 1:
			cout << "Agregar a cual Familia" << "\n";
			cin >> fam_op;
			switch (fam_op) {
				case 1:
					fStark->getvPFR().push_back(new PequeniaFamiliaNoble());
					break;
				case 2:
					fLan->getvGR().push_back(new GuardiaReal());
					break;
				case 3:
					fTar->getDrag().push_back(new Dragones());
					break;
			}		
			break;
		case 2:
			switch (op2) {
				case 1:
					for (int i = 0;i<fStark->getvPFR().size();i++) {
						cout << fStark->getvPFR().at(i)->getNombre() << "\n";	
					}
					break;
				case 2:
					fLan->getvGR().push_back(new GuardiaReal());
					break;
				case 3:
					fTar->getDrag().push_back(new Dragones());
					break;
			}
			break;
		case 3:
			break;
		case 4:
			break;
			break;
		case 6:
			break;
		}
	cin >> op;	
	}
	return 0;
}
void menu() {
	cout<<"1) Agregar Ejercito"<<"\n";
	cout<<"2) Listar Ejercito"<<"\n";
	cout<<"3) Eliminar Ejercito"<<"\n";
	cout<<""<<"\n";
	cout<<""<<"\n";
	cout<<""<<"\n";
}

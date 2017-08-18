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
//AAHH
using namespace std;
int main(){
	int op = 0;
	int fam_op;
	int op2;
	int op3;
	int op4;
	Starks* fStark = new Starks("Tanya", "AHAHAHA!!!", "Lobo", 12, "Herbert", 12);
	Lannister* fLan = new Lannister();
	Targaryen* fTar = new Targaryen();
	while (op != 6) {
	menu();
	cin >> op;
	switch (op) {
		case 1:
			cout << "Agregar a cual Familia" << "\n";
			cin >> fam_op;
			switch (fam_op) {
				case 1:
					cout << "Agregado a starks" << "\n";
					fStark->getvPFR().push_back(new PequeniaFamiliaNoble("a","b","c",15,12));
					break;
				case 2:
					//fLan->getvGR().push_back(new GuardiaReal());
					break;
				case 3:
					//fTar->getDrag().push_back(new Dragones());
					break;
			}		
			break;
		case 2:
			cout << "Listar cual Familia" << "\n";
			cin >> op2;
			switch (op2) {
				case 1:
					cout << fStark->getJefe() << "\n";
					for (int i = 0;i<fStark->getvPFR().size();i++) {
						cout << fStark->getvPFR().at(i)->getNombre() << "\n";	
					}
					break;
				case 2:
					//cout << fStark->getJefe() << "\n";
					break;
				case 3:
					//cout << fStark->getJefe() << "\n";
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

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
using namespace std;
int main(){
	int op = 0;
	int fam_op;
	Starks* fStark = new Starks();
	while (op != 6) {
	switch (op) {
		case 1:
			cout << "Agregar a cual Familia" << "\n";
			cin >> fam_op;
			switch (fam_op) {
				case 1:
					fStark->getvPFR().push_back(new PequeniaFamiliaNoble());
					break;
				case 2:
					break;
				case 3:
					break;
			}		
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		}
	cin >> op;	
	}
	return 0;
}

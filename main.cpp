#include <string>
#include <iostream>
#include "Dragones.h"
#include "Familia.h"
#include "Lannister.h"
#include "Starks.h"
#include "GuardiaReal.h"
#include "Dothraki.h"
#include "PequeniaFamiliaNoble.h"
using namespace std;
int main(){
	Starks* starks = new Starks();
	starks->setLobos(1);
	cout << starks->getLobos();
	return 0;
}

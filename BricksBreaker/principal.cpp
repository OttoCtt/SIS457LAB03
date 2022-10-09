#include <iostream>
#include <stdlib.h>
#include "Barra.h"
#include "Bola.h"
#include "BoxTrap.h"
#include "BoxUpgrate.h"
#include "Escenario.h"
#include "ItemDecline.h"
#include "ItemUpgrate.h"
#include "Ladrillo.h"
#include "LadrilloIrrompible.h"

using namespace std;

int main() {
	Escenario* scn = new Escenario;
	scn->Tamano = 12;
	Barra* bar = new Barra;
	Bola* bol = new Bola;
	Ladrillo* lad = new Ladrillo;
	lad->Ubicacion = 85;
	LadrilloIrrompible* ldr = new LadrilloIrrompible;

	system("pause");
	return 0;
}
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
#include "Pila.h"
using namespace std;

int main() {
	Escenario* scn = new Escenario;
	scn->Tamano = 12;
	Barra* bar = new Barra;
	Bola* bol = new Bola;
	Ladrillo* lad = new Ladrillo;
	lad->Ubicacion = 85;
	LadrilloIrrompible* ldr = new LadrilloIrrompible;
	Pila<Ladrillo>pladrillo(5);
	Ladrillo ld1;
	Ladrillo ld2;
	Ladrillo ld3;
	pladrillo.Insertar(ld1);
	pladrillo.Insertar(ld2);
	pladrillo.Insertar(ld3);
	Pila<int>enteros(3);
	enteros.Insertar(25);
	enteros.Insertar(24);
	enteros.Sacar();
	Pila<float>reales(3);
	reales.Insertar(27.5f);
	reales.Insertar(29.5f);
	reales.Sacar();
	Pila<string>cad(2);
	cad.Insertar("Hola ");
	cad.Insertar("mundo.");
	Pila<double>reales2(2);
	reales2.Insertar(24.1611511f);
	reales2.Insertar(0.3146f);
	Pila<Escenario>esc(2);
	Escenario nivel1;
	Escenario nivel2;
	esc.Insertar(nivel1);
	esc.Insertar(nivel2);

	system("pause");
	return 0;
}
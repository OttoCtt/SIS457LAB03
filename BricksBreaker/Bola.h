#pragma once
class Bola
{
public:
	Bola() {};
protected:
	int Velocidad;
	int Posicion;
	int Trayectoria;
private:
	void MoverXY();
	void Colision();
};


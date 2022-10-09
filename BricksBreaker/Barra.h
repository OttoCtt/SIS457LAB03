#pragma once
class Barra
{
public:
	Barra() {};
protected:
	int Velocidad;
	int Ubicacion;
	int Tamaño;
private:
	void MovimientoHorizontal();
	void Colision();
};


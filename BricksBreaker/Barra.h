#pragma once
class Barra
{
public:
	Barra() {};
protected:
	int Velocidad;
	int Ubicacion;
	int Tama�o;
private:
	void MovimientoHorizontal();
	void Colision();
};


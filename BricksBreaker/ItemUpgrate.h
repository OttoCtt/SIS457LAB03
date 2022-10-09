#pragma once
class ItemUpgrate
{
public:
	ItemUpgrate() {};
	int Gravedad;
protected:
	int Timelife;
private:
	void Mov();
	void Colision();
};


#pragma once
#include "Ladrillo.h"
class LadrilloIrrompible :
    public Ladrillo
{
public:
    LadrilloIrrompible() {};
    int Regeneracion = 999999;
protected:
private:
    void reparacion();
};


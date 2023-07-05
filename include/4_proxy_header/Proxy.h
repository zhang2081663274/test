#pragma once
#include "GiveGift.h"
#include "Pursuit.h"
class Proxy:GiveGift
{
private:
    Pursuit* gg;
public:
    
    Proxy(SchoolGirl* mm);
    ~Proxy();

    void GiveDolls();
    void GiveFlowers();
    void GiveChocolate();
};

Proxy::Proxy(SchoolGirl* mm)
{
    gg = new Pursuit(mm);
}

Proxy::~Proxy()
{
}

inline void Proxy::GiveDolls()
{
    gg->GiveDolls();
}

inline void Proxy::GiveFlowers()
{
    gg->GiveFlowers();
}

inline void Proxy::GiveChocolate()
{
    gg->GiveChocolate();
}

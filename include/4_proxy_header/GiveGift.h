#pragma once
class GiveGift
{
private:
    /* data */
public:
    GiveGift(/* args */){}
    virtual ~GiveGift(){};

    virtual void GiveDolls() = 0;
    virtual void GiveFlowers() = 0;
    virtual void GiveChocolate() = 0;
};



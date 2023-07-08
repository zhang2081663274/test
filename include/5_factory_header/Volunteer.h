#pragma once 
#include "LeiFeng.h"

class Volunteer:public LeiFeng
{
private:
    /* data */
public:
    Volunteer(/* args */);
    ~Volunteer();

    inline void Sweep(){std::cout << "志愿者扫地\n";}

    inline void Wash(){std::cout << "志愿者洗衣\n";}

    inline void BugRice(){std::cout << "志愿者买米\n";}
};

Volunteer::Volunteer(/* args */)
{
}

Volunteer::~Volunteer()
{
}


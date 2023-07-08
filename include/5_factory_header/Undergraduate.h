#pragma once 
#include "LeiFeng.h"

class Undergraduate:public LeiFeng
{
private:
    /* data */
public:
    Undergraduate(/* args */);
    ~Undergraduate();

    inline void Sweep(){std::cout << "学生扫地\n";}

    inline void Wash(){std::cout << "学生洗衣\n";}

    inline void BugRice(){std::cout << "学生买米\n";}
};

Undergraduate::Undergraduate(/* args */)
{
}

Undergraduate::~Undergraduate()
{
}

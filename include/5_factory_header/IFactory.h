#pragma once 
#include "LeiFeng.h"

class IFactory
{
private:
    /* data */

public:
    IFactory(/* args */);
    ~IFactory();

    virtual LeiFeng* CreateLeiFeng() = 0;
};

IFactory::IFactory(/* args */)
{
}

IFactory::~IFactory()
{
}

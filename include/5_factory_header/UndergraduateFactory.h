#pragma once 
#include "IFactory.h"
#include "Undergraduate.h"

class UndergraduateFactory : public IFactory
{
private:
    /* data */
public:
    UndergraduateFactory(/* args */);
    ~UndergraduateFactory();
    
    LeiFeng* CreateLeiFeng(){
        return new Undergraduate();
    }
};

UndergraduateFactory::UndergraduateFactory(/* args */)
{
    std::cout << "学生雷锋\n";
}

UndergraduateFactory::~UndergraduateFactory()
{
}

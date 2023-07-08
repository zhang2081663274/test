#pragma once 
#include "IFactory.h"
#include "Volunteer.h"
class VolunteerFactory:public IFactory
{
private:
    /* data */
public:
    VolunteerFactory(/* args */);
    ~VolunteerFactory();

    LeiFeng* CreateLeiFeng()
    {
        return new Volunteer();
    }
};

VolunteerFactory::VolunteerFactory(/* args */)
{
}

VolunteerFactory::~VolunteerFactory()
{
}


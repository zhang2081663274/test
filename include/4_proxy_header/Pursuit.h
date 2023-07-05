#pragma once 
#include "SchoolGirl.h"
#include "GiveGift.h"
#include <iostream>
class Pursuit:public GiveGift
{
private:
    SchoolGirl* m_mm;
public:
    Pursuit(SchoolGirl* mm);
    ~Pursuit();

    void GiveDolls();
    void GiveFlowers();
    void GiveChocolate();
};

Pursuit::Pursuit(SchoolGirl* mm):m_mm(mm)
{
}

Pursuit::~Pursuit()
{
    if (m_mm != nullptr)
    {
        delete m_mm;
        m_mm = nullptr;
    }
    
}

inline void Pursuit::GiveDolls()
{
    std::cout << m_mm->getname() << "give you dolls\n";
}

inline void Pursuit::GiveFlowers()
{
    std::cout << m_mm->getname() << "give you Flowers\n";
}

inline void Pursuit::GiveChocolate()
{
    std::cout << m_mm->getname() << "give you Chocolate\n";
}

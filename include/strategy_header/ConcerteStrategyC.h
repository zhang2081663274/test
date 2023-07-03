#pragma once
#include "Strategy.h"
#include <iostream>

namespace mystl
{
    class ConcreteStrategyC:public Strategy
    {
    public:
        ConcreteStrategyC(){};
        ~ConcreteStrategyC(){};
        void AlgorithmInterface()
        {
            std::cout << "算法C实现" << std::endl;
        }
    };
}
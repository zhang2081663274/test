#pragma once
#include "Strategy.h"
#include <iostream>

namespace mystl
{
    class ConcreteStrategyB:public Strategy
    {
    public:
        ConcreteStrategyB(){};
        ~ConcreteStrategyB(){};
        void AlgorithmInterface()
        {
            std::cout << "算法B实现" << std::endl;
        }
    };
}
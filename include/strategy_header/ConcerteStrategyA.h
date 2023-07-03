#pragma once
#include "Strategy.h"
#include <iostream>

namespace mystl
{
    class ConcreteStrategyA:public Strategy
    {
    public:
        ConcreteStrategyA(){};
        ~ConcreteStrategyA(){};

        void AlgorithmInterface()
        {
            std::cout << "算法A实现" << std::endl;
        }
    };
}
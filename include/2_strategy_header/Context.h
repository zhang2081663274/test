#pragma once
#include "Strategy.h"
#include <iostream>

namespace mystl
{
    class Context
    {
    private:
        Strategy* _strategy = nullptr;
    public:
        Context(Strategy* strategy):_strategy(strategy){}
        inline void ContextInterface()
        {
            _strategy->AlgorithmInterface();
        }
        void freePtr();
        ~Context(){}
    };

    inline void Context::freePtr()
    {
        if(_strategy)
        {
            delete _strategy;
            _strategy = nullptr;
        }
    }
}


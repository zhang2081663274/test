#pragma once

namespace mystl{

    class Strategy
    {
    public:
        Strategy(){};
        virtual ~Strategy(){};
        virtual void AlgorithmInterface() = 0;
    };

}
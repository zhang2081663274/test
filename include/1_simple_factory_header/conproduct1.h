#pragma once

#include "product.h"
#include <iostream>
using namespace mystl::test;
class ConProduct1:public mystl::test::product
{
    public:
        void show()
        {
            std::cout << "小米手机" << std::endl;
        }
};
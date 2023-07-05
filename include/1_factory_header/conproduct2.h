#pragma once

#include "product.h"
#include <iostream>
using namespace mystl::test;
class ConProduct2:public mystl::test::product
{
    public:
        void show()
        {
            std::cout <<"华为手机" << std::endl;
        }
};
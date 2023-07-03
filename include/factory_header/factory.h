#pragma once

#include "product.h"
#include "conproduct1.h"
#include "conproduct2.h"
using namespace mystl::test;
class Factory
{
    public:
        static mystl::test::product *newProduct(int type);
};
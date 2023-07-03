#include "factory.h"
using namespace mystl::test;
mystl::test::product *Factory::newProduct(int type)
{
    mystl::test::product* pro1 = nullptr;
    switch (type)
    {
    case 1:
        pro1 = new ConProduct1();
        break;
    case 2:
        pro1 = new ConProduct2();
        break;
    default:
        break;
    }
    return pro1;
}
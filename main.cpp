/**
 * @file main.cpp
 * @author 包含简单工厂以及策略模式的main内容
 * @brief 
 * @version 0.1
 * @date 2023-07-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

//简单工厂头文件
// #include "factory.h"
// #include "product.h"

#include "Context.h"
#include "ConcerteStrategyA.h"
#include "ConcerteStrategyB.h"
#include "ConcerteStrategyC.h"

#include "Decorator.h"
#include "Person.h"

#include "Pursuit.h"
#include "SchoolGirl.h"
#include "Proxy.h"

// using namespace mystl::test;
using namespace mystl;
int main()
{
    //===================== 简单工厂模式===================
    // mystl::test::product* pOne = Factory::newProduct(1);
    // mystl::test::product* pTwo = Factory::newProduct(2);
    // pOne->show();
    // pTwo->show();
    //===================== 简单工厂模式===================


    //===================== 策略模式===================
    // auto pConcreteStrategyA = new ConcreteStrategyA();
    // auto pConcreteStrategyB = new ConcreteStrategyB();
    // auto pConcreteStrategyC = new ConcreteStrategyC();

    // auto pContextA = new Context(pConcreteStrategyA);
    // auto pContextB = new Context(pConcreteStrategyB);
    // auto pContextC = new Context(pConcreteStrategyC);

    // pContextA->ContextInterface();
    // pContextB->ContextInterface();
    // pContextC->ContextInterface();

    // pContextA->freePtr();
    // pContextB->freePtr();
    // pContextC->freePtr();
    //===================== 策略模式===================


    //===================== 装饰模式===================
    // Person* onePerson = new NumberPerson("zhangsan");
    // Person* decorateA = new DecoratePersonA(onePerson);
    // Person* decorateB = new DecoratePersonB(decorateA);
    // decorateB->show();
    //===================== 装饰模式===================

    //===================== 代理模式===================
    //修改前
    // SchoolGirl* jiaojiao = new SchoolGirl("jiaojiao");
    // Pursuit* zhuojia = new Pursuit(jiaojiao);
    // zhuojia->GiveChocolate();
    // zhuojia->GiveDolls();
    // zhuojia->GiveFlowers();
    //修改后
    SchoolGirl* jiaojiao = new SchoolGirl("jiaojiao");
    Proxy* daili = new Proxy(jiaojiao);
    daili->GiveDolls();
    daili->GiveChocolate();
    daili->GiveFlowers();
    

    return 0;
}
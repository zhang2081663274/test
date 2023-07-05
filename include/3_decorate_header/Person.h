#pragma once 
#include <string>
#include <iostream>
class Person
{
private:
    /* data */
public:
    Person(/* args */){};
    virtual void show() = 0;
    virtual ~Person(){}
};

class NumberPerson:public Person
{
private:
    std::string m_name;
public:
    NumberPerson(std::string name):m_name(name)
    {}
    virtual void show()
    {
        std::cout << m_name << std::endl;
    }
    ~NumberPerson(){}
};







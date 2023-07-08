#pragma once 
#include<iostream>
class LeiFeng
{
private:
    /* data */
public:
    LeiFeng(/* args */);
    ~LeiFeng();

    virtual inline void Sweep(){std::cout << "扫地\n";}

    virtual inline void Wash(){std::cout << "洗衣\n";}

    virtual inline void BugRice(){std::cout << "买米\n";}


};

LeiFeng::LeiFeng(/* args */)
{
}

LeiFeng::~LeiFeng()
{
}

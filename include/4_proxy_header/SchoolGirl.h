#pragma once
#include <string>
class SchoolGirl
{
private:
    std::string m_name;
public:
    SchoolGirl(std::string name);
    ~SchoolGirl();

    std::string& getname();
};

SchoolGirl::SchoolGirl(std::string name):m_name(name)
{
}


SchoolGirl::~SchoolGirl()
{
}

inline std::string &SchoolGirl::getname()
{
    return m_name;
}

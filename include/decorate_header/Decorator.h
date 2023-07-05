#pragma once 
#include "Person.h"
class DecoratePerson:public Person
{
protected:
    Person *m_person;
public:
    DecoratePerson(Person* person_):m_person(person_)
    {}
    virtual void show()
    {
        m_person->show();
    }
    
};

class DecoratePersonA:public DecoratePerson
{
public:
    DecoratePersonA(Person* person_):DecoratePerson(person_)
    {
        //this->m_person = person_;
    }
    virtual void show()
    {
        std::cout << "DecoratePersonA\n";
        m_person->show();
    }
    
    
private:
   // Person* m_person;
};

class DecoratePersonB:public DecoratePerson
{
private:
   //  Person * m_person;
public:
    DecoratePersonB(Person* person_):DecoratePerson(person_)
    {
      //   m_person = person_;
    }
    virtual void show()
    {
        std::cout << "DecoratePersonB" << std::endl;
        m_person->show();
    }
    
};



#include "BasePerson.h"
#ifndef PERSON_H
#define PERSON_H

class Person :
    public BasePerson
{
    Person(const std::string& name);
    BasePerson* clone() const override;
    void displayInfo() const override;
};


#endif



//
// Created by Owner on 24/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONADMINISTRATOR_H
#define MY_PROJECT_NAME_PERSONADMINISTRATOR_H
#include <sstream>
#include "ISaveFrom.h"
#include "IReadFrom.h"

class PersonAdministrator {

public:
    void savingPerson(ISaveFrom*save, Person*person);

    void savingPersons(ISaveFrom*save, Person*person);

    std::vector<Person> reading(IReadFrom* read);
};


#endif //MY_PROJECT_NAME_PERSONADMINISTRATOR_H

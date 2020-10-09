//
// Created by Owner on 08/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONLIST_H
#define MY_PROJECT_NAME_PERSONLIST_H
#include <sstream>
#include <list>
#include "Person.h"
using namespace std;

class PersonList {
private:
    list<Person> linkedList;

public:

    void addPerson(Person *person);

};


#endif //MY_PROJECT_NAME_PERSONLIST_H

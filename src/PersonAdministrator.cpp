//
// Created by Owner on 24/10/2020.
//

#include "PersonAdministrator.h"

void PersonAdministrator::savingPerson(ISaveFrom*save, Person*person){
    save->saving(person);
}

void PersonAdministrator::savingPersons(ISaveFrom*save, Person*person){
    save->saving(person);
}

std::vector<Person> PersonAdministrator:: reading(IReadFrom* read){
    read->reading();
}
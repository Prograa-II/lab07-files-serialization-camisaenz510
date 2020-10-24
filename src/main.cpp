//
// Created by Owner on 08/10/2020.
//


#include <iostream>
#include <sstream>
#include "PersonAdministrator.h"
#include "InBinary.h"
#include "InJSON.h"

int main() {

    //creating the person
    Person person_1("Fabiola", 1010, 19);
    Person person_2("Maria", 1020, 30);
    Person person_3("Adrian", 1030, 10);

    //creating the list
    vector<Person> personList;
    personList.push_back(person_1);
    personList.push_back(person_2);
    personList.push_back(person_3);

    //creating the archive
    PersonAdministrator *admin;
    InBinary* binary=new InBinary();
    InJSON* json=new InJSON();

    //administrator
    admin->savingPersons(binary, personList);
    admin->savingPersons(json, personList);

    //in binary
    cout<<" SHOWING IN BINARY"<<std::endl;
    vector<Person> aux= admin->reading(binary);
    for (Person auxPerson: aux){
        cout<<auxPerson.toString()<<std::endl;
    }

    //in json
    cout<<" SHOWING IN JSON"<<std::endl;
    vector<Person> auxi;
    auxi=admin->reading(json);
    for(Person auxPerson: auxi){
        cout<<auxPerson.toString()<<std::endl;
    }



    return 0;
}

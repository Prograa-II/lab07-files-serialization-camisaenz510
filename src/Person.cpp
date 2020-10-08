//
// Created by Owner on 08/10/2020.
//

#include "Person.h"

Person::Person(int id,int age,std::string name){
    this->id=id;
    this->age=age;
    this->name=name;
}

Person::Person(){
    this->id=0;
    this->age=0;
    this->name="Undefined";
}
//
// Created by Camila on 08/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H
#include <sstream>

class Person {

private:
    int id;
    int age;
    std::string name;

public:
    Person(int,int,std::string);

    Person();

    std::string getName();

    int getId();

    int getAge();

    void setName(std::string name);

    void setId(int id);

    void setAge(int age);

    std::string toString();
};


#endif //MY_PROJECT_NAME_PERSON_H

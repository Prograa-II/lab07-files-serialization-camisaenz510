//
// Created by Owner on 24/10/2020.
//

#ifndef MY_PROJECT_NAME_INJSON_H
#define MY_PROJECT_NAME_INJSON_H
#include <sstream>
#include <fstream>
#include <../lib/nlohmann/json.hpp>
#include "ISaveFrom.h"
#include "IReadFrom.h"

using namespace std;
using json = nlohmann::json;

class InJSON: public ISaveFrom, public IReadFrom{

private:

    void saving(Person*person)override;

    void saving(std::vector<Person>)override;

    std::vector<Person> reading()override;

};


#endif //MY_PROJECT_NAME_INJSON_H

#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>

struct Data {
    int id;
    std::string name;
    float value;

    Data(int id_, const std::string& name_, float value_) : id(id_), name(name_), value(value_) {}
};

#endif

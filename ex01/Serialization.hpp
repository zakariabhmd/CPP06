#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

typedef unsigned long uintptr_t;

#include <iostream>
#include "data.hpp"

// struct Data{
// 	int a;
// };

class Serializer{
	private:
		Serializer();
	public :
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
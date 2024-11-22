#ifndef SCALARTYPE_HPP
#define SCALARTYPE_HPP

#include <iostream>
#include <cstdlib>
#include <limits>

class ScalarConverter{
	private :
		ScalarConverter();
	public:
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator =(const ScalarConverter &copy);
		~ScalarConverter();
		static void convert( std::string str);
		static void to_char(double s);
		static void to_int(double s);
		static void to_float(double s, int i);
		static void to_double(double s,int i);
		static int	count(std::string s);
		static int ft_digit(char c);
};


#endif
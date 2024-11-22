#include "Scalartype.hpp"
#include <iomanip>
#include <climits>

ScalarConverter::ScalarConverter(){
}
ScalarConverter::~ScalarConverter(){
}
ScalarConverter::ScalarConverter(const ScalarConverter &copy){
	*this = copy;
}
ScalarConverter &ScalarConverter::operator =(const ScalarConverter &copy){
	(void)copy;
	return *this;
}

int ScalarConverter::ft_digit(char c){
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

int ScalarConverter::count(std::string s)
{
	int i =0;
	int a =0;
	while(s[i] != '.')
		i++;
	i++;
	if(s[i]){

		while(ft_digit(s[i]) == 1){
			i++;
			a++;
		}
		if (a == 0)
			a = 1;
		return a;
	}
	return 1;
}

void ScalarConverter::to_char(double s){
	if(s >= 32 && s < 127) {
		std::cout <<"char: '" << static_cast<char>(s) <<"\'" << std::endl;}
	else
		std::cout <<"char: Non displayable"<<std::endl;
}
void ScalarConverter::to_int(double s){
	if(s >= INT_MIN && s <= INT_MAX)
		std::cout <<"int: " << static_cast<int>(s) <<std::endl;
	else
		std::cout <<"int: Non displayable"<<std::endl;
}
void ScalarConverter::to_float(double s,int i){
	std::cout << std::fixed << std::setprecision(i) << "float: " << static_cast<float>(s) << "f"<<std::endl;
}
void ScalarConverter::to_double(double s,int i){
		std::cout << std::fixed << std::setprecision(i) << "double: " << static_cast<double>(s) <<std::endl;
}


void ScalarConverter::convert( std::string s){
	
	char *back_up = NULL;
    double convertedValue = strtod(s.c_str(), &back_up);
	std::string str(back_up);
	if (convertedValue != convertedValue)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << s << "f" <<std::endl;
		std::cout << "double: " << s  << std::endl;
		return ;
	}
	else if (*back_up != '\0')
	{
		if (s.length() == 1 && (s[0] >= 32 && s[0] <= 126) )
		{
			to_char(s[0]);
			to_int(s[0]);
			to_float(s[0], count(s));
			to_double(s[0], count(s));
			return;
		}
		else if(back_up && str != "f"){
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" <<std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
		}
		else{
			to_char(convertedValue);
			to_int(convertedValue);
			to_float(convertedValue, count(s));
			to_double(convertedValue, count(s));
			return;
		}
	}
	else{
		to_char(convertedValue);
		to_int(convertedValue);
		to_float(convertedValue, count(s));
		to_double(convertedValue, count(s));
		return;
	}
}
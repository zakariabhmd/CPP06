#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"


Base *generate(void){
	std::string str[3] = {"A", "B", "C"};
	srand(time(NULL));
	if(std::rand() % 3 == 0)
		return new A;
	else if (std::rand() % 3 == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout <<"*A" <<std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout <<"*B" <<std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout <<"*C" <<std::endl;
	else
		std::cerr << "bad type" << std::endl; 
}
void identify(Base& p){
	try{
		(void)dynamic_cast<A&>(p);
		std::cout <<"&A" <<std::endl;
	}
	catch(std::exception &e){
		try{
		(void)dynamic_cast<B&>(p);
		std::cout <<"&B" <<std::endl;
		}
		catch(std::exception &e){
			try{
			(void)dynamic_cast<C&>(p);
			std::cout <<"&C" <<std::endl;
			}
				catch(std::exception &e){
					std::cout << "unknown type." << std::endl;
			}
		}
	}
}
#include <iostream>
#include "complex.hpp"

int main(void){
	using com = complex_number<double>;
	com c1(1, 2);
	com c2(1, -2);
	
    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
	std::cout << c2.coniugato() << std::endl;
	com c3 = c1 += c2;
	com c4 = c1 + c2;
	std::cout << c3 << std::endl;
	std::cout << c4 << std::endl;
	

    return 0;
};
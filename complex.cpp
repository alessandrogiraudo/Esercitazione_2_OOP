#include <iostream>
#include "complex.hpp"

int main(void){
	using com = complex_number<int>;
	using con = coniugato<int>
	
    com c(3, 5);
	con d(3, 5);
	
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    return 0;
}
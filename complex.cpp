#include <iostream>
#include "complex.hpp"

int main(void){
	using com = complex_number<double>;
	com c1(1, 2);
	com c2(2, -3);
	com c3(1, 2.0);
	com c4(2.1, -3.4);
	
    std::cout << "c1 è : " << c1 << std::endl;
    std::cout << "c2 è : " << c2 << std::endl;
	
	/* Stampa del coniugato*/
	std::cout << "il coniugato di " << c2 << " è : " << c2.coniugato() << std::endl;
	
	/* Stampa della parte reale e parte immaginaria*/
	std::cout << "La parte reale di " << c1 << " è :" << c1.real() << std::endl;
	std::cout << "La parte immaginaria di " << c1 << " è :" << c1.imag() << std::endl;
	
	/*Prova degli overload:
	"+="
	"+"
	"*="
	"*"
	*/
	std::cout << c1 << " += " << c2 << " = " << (c1+=c2) << std::endl;
	std::cout << c3<< " + " << c4 << " = " << (c3+c4) << std::endl;
	std::cout << c1 << " *= " << c2 << " = " << (c1*=c2) << std::endl;
	std::cout << c1 << " * " << c2 << " = " << (c1*c2) << std::endl;
		

    return 0;
};
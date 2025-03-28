#include <iostream>
#include "complex.hpp"
 
int main(void){
	using com = complex_number<double>;
	com c1(1.0, 2.0);
	com c2(2.0, -3.0);
	com c3(1.0, 2.0);
	com c4(2.1, -3.4);
	double c5 = 2.0;
	double c6 = 2.689;
	
    std::cout << "c1 è : " << c1 << std::endl;
    std::cout << "c2 è : " << c2 << std::endl;
	
	/* Stampa del coniugato*/
	std::cout << "il coniugato di " << c2 << " è : " << c2.coniugato() << std::endl;
	
	/* Stampa della parte reale e parte immaginaria*/
	std::cout << "La parte reale di " << c1 << " è :" << c1.real() << std::endl;
	std::cout << "La parte immaginaria di " << c1 << " è :" << c1.imag() << std::endl;
	
	/*Prova degli overload: "+=", "+", "*=", "*" */
	
	
	std::cout << c1 << " += " << c2 << " = " << (c1+=c2) << std::endl;
	std::cout << c3<< " + " << c4 << " = " << c3+c4 << std::endl;
	std::cout << c1 << " *= " << c2 << " = " << (c1*=c2) << std::endl;
	std::cout << c1 << " * " << c2 << " = " << c1*c2 << std::endl;
	
	/* Somma tra un T e un complex_number<T>*/ 
	std::cout << "La somma tra " << c5 << " e " << c1 << " è " << c5+c1 << std::endl;
	std::cout << "La moltiplicazione tra " << c6 << " e " << c1 << " è " << c6*c1 << std::endl;
	

    return 0;
};
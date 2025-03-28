#include <iostream>
#include "complex.hpp"
 
int main(void){
	using com = complex_number<double>;
	using com1 = complex_number<float>;
	com c1(1.0, 2.0);
	com c2(2.0, -3.0);
	com1 c3(1.0, 2.0);
	com1 c4(2.1, -3.4);
	double c5 = 2.0;
	float c6 = 2.689;
	
	/* Stampa del coniugato*/
	std::cout << "il coniugato di " << c2 << " = " << c2.coniugato() << std::endl;
	
	/* Stampa della parte reale e parte immaginaria*/
	std::cout << "La parte reale di " << c1 << " = " << c1.real() << std::endl;
	std::cout << "La parte immaginaria di " << c1 << " = " << c1.imag() << std::endl;
	
	/* Stampa degli overload: "+=", "+", "*=", "*" */
	
	std::cout << c1 << " += " << c2 << " = " << (c1+=c2) << std::endl;
	std::cout << c1 << " + " << c2 << " = " << c1+c2 << std::endl;
	std::cout << c1 << " *= " << c2 << " = " << (c1*=c2) << std::endl;
	std::cout << c1 << " * " << c2 << " = " << c1*c2 << std::endl;
	
	/* Somma e prodotto tra un double e un complex_number<double> e il commutativo */ 
	std::cout << "La somma tra " << c5 << " e " << c1 << " = " << c5+c1 << std::endl;
	std::cout << "La somma tra " << c1 << " e " << c5 << " = " << c1+c5 << std::endl;
	std::cout << "La moltiplicazione tra " << c5 << " e " << c1 << " = " << c5*c1 << std::endl;
	std::cout << "La moltiplicazione tra " << c1 << " e " << c5 << " = " << c1*c5 << std::endl;
	
	/* Somma e prodotto tra un float e un complex_number<float> e il commutativo */ 
	std::cout << "La somma tra " << c3 << " e " << c6 << " = " << c3+c6 << std::endl;
	std::cout << "La somma tra " << c6 << " e " << c3 << " = " << c6+c3 << std::endl;
	std::cout << "La moltiplicazione tra " << c6 << " e " << c3 << " = " << c6*c3 << std::endl;
	std::cout << "La moltiplicazione tra " << c3 << " e " << c6 << " = " << c3*c6 << std::endl;

    return 0;
};
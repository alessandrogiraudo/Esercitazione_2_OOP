#pragma once
#include <concepts> 
#include <type_traits>  // Required for std::is_arithmetic


template<typename T> requires std::is_arithmetic_v<T> 
class complex_number 
{
	T   re;
	T   im;

public:
	complex_number() : re(0), im(0) {};
	
	complex_number(T reale, T immaginario) : re(reale), im(immaginario) {};
    
	/* Improve the situation of coniugato*/
	
	T coniuga() : re(-reale), im(-immaginario) {};
	
    friend std::ostream& operator<<(std::ostream& os, const complex_number& c) {
        return os << c.re << " + " << c.im << "i";
    }
    friend std::ostream& operator<<(std::ostream& os, const complex_number& d) {
        return os << d.re << " - " << d.im << "i";
    }


};




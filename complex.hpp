#pragma once
#include <concepts> 
#include <type_traits>  // Required for std::is_arithmetic


template<typename T> 
requires std::floating_point<T> 
class complex_number 
{
	T   re;
	T   im;

public:
	complex_number() : re(0), im(0) {};
	
	complex_number(T reale, T immaginario) : re(reale), im(immaginario) {};
    
	/* Improve the situation of coniugato*/
	
	T real() const {return re;}
	T imag() const {return im;}	
	complex_number coniugato() const {
		return complex_number(re, -im);
	}
	
	complex_number& operator+=(const complex_number<T>& other) {
		re += other.re;
		im += other.im;
		return *this;
	}
	
	complex_number& operator+(const complex_number<T>& other) const {
		//return complex_number com = *this;
		complex_number<T> com = *this;
		com += other;
		return complex_number<T> com;
	}
	
	
	complex_number& operator*=(const complex_number<T>& other) {
		T real = re * other.re - im * other.im;
		T imma = re * other.im + im * other.re;
		re = real;
		im = imma;
		return *this;
	}

};
template<typename T>
std::ostream&
operator<<(std::ostream& os, const complex_number<T>& c) {
	 if (c.imag() >= 0) {
        return os << c.real() << " + " << c.imag() << "i";
	 } else{
		return os << c.real() << c.imag() << "i";
	};
    };





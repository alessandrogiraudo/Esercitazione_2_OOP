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
	
	/*complex_number& operator+=(const complex_number& other) {
        reale = real;
        immag = imma;
        c = other.real;
        d = other.imma;
        real = reale + c;
        immag = immag + d;
        return *this;
	}*/
	
	complex_number& operator+=(const complex_number<T>& other) {
		re += other.re;
		im += other.im;
		return *this;
	}
	
	complex_number operator+(const complex_number& other) const {
		//return complex_number com = *this;
		complex_number com = *this;
		com += other;
		return com;
	}
	
	
	complex_number& operator*=(const complex_number& other) {
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
	os << c.real();
	 if (c.imag() >= 0) {
        os << " + " << c.imag() << "i";
	 } else{
		os << " - " << -c.imag() << "i";
	}
	
	return os;
}





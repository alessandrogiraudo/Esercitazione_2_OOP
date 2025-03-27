#pragma once


template<typename T> 
requires std::is_floating_point_v<T> 
class complex_number 
{
	T   re;
	T   im;

public:
	complex_number() : re(0), im(0) {};
	
	complex_number(T reale, T immaginario) : re(reale), im(immaginario) {};
    
	/* Improve the situation of coniugato*/
	
	T real(void) const {
		return re;
		};
	T imag(void) const {
		return im;
		};
		
	complex_number coniugato() const {
		return complex_number(re, -im);
	};
	
	complex_number& operator+=(const complex_number<T>& other) {
		T a = re;
		T b = im;
		T c = other.re;
		T d = other.im;
		re = a+c;
		im = b+d;
		return *this;
	}
	
	complex_number operator+(const complex_number& other) const {
		complex_number com = *this;
		com += other;
		return com;
	}
	
	complex_number& operator+=(const T& other) {
		re += other;
		return *this;
	
	complex_number operator+(const T& other) {
		complex_number com = *this;
		com += other;
		return com;
	}
	
	complex_number& operator*=(const complex_number& other) {
		T a = re;
		T b = im;
		T c = other.re;
		T d = other.im;
		re = a*c - b*d;
		im = a*d + b*c;
		return *this;
	}
	
	complex_number operator*(const complex_number& other) const {
        complex_number com = *this;
		com *= other;
        return com;
    }
	
	complex_number& operator*=(const T& other) {
		re *= other;
		im *= other;
		return *this;
	}
	
	complex_number operator*(const T& other) const {
        complex_number com = *this;
		com *= other;
        return com;
    }

};

template<typename T>
complex_number<T>
operator+(const T& i, const complex_number<T>& com)
{
    return com + i;
};

complex_number<T>
operator*(const T& i, const complex_number<T>& com)
{
    return com*i;
};

template<typename T>
std::ostream&
operator<<(std::ostream& os, const complex_number<T>& com) {
	os << com.real();
	 if (com.imag() >= 0) {
        os << " + " << com.imag() << "i";
	 } else{
		os << " - " << -com.imag() << "i";
	}
	
	return os;
};


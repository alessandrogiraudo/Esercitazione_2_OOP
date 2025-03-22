#pragma once

template<typename T> requires std::is_arithmetic<T> 

class complex_number {
T   re;
T   im;

public:
    complex_number(){
        re = 0;
        im = 0;
    };
    complex_number(T reale, T immmaginario){
        re = reale;
        im = immmaginario;
    };

	complex_number_coniugato(){
    return T complex_number(re, -im);
};

};




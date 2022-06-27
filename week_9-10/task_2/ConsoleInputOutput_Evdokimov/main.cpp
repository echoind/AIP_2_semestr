#include <stdio.h>
#include <iostream>


float a,b,c,d;

void shift_right_3(float a, float b, float c){

    d=a;
    a=b;
    b=c;
    c=d;

    std::cout<< a << b << c << "call end" << std::endl;
}

int main(void){ 

    std::cin>> a >> b >> c;   
    shift_right_3(a,b,c);
    return 0;

}

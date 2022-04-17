#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    float x=3.6;
    float y=exp(x-2)+abs(sin(x))-pow(x,4)*cos(1/x);
    std::cout <<"otvet"<< y << std::endl;

    return 0;

}

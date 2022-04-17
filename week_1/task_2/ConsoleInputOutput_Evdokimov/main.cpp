#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    float a,ugol,P,S;
    std::cout <<"Romb"<< std::endl;
    std::cin>>a>>ugol;
    P = 4*a;
    S = a*a*(sin(M_PI*ugol/180));
    std::cout<<"Perimeter" <<" = "<<P <<std::endl;
    std::cout<<"Square" <<" = "<<S <<std::endl;

    return 0;

}

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int d=7;
    int n; //повтор
    float x; //argument
    float ch ;
    std::cout<<"Enter the x(argument) and n(cycle): ";
    std::cin>>x>>n;
    for(int i = 1;i<=n ;i++){
    ch+=-i/(x*d);
    d+=i;
    ch*=-1;
    }
    std::cout<<"sledovatelno = "<<ch;
    return 0;

}

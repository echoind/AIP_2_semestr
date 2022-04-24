#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    float d =1;

    int n; //повтор
    float x; //argument
    float ch =1;
    std::cout<<"Enter the x(argument) and n(cycle): ";
    std::cin>>x>>n;
    for(int i = 2;i<=n ;i=i*2){
        int fact = 1;
        for(int j =1; j<=i; j+=1)
        fact=fact*j;
    d*=x*x;
    ch+=-d/(fact);
    ch*=-1;
    }

    std::cout<<"sledovatelno = "<<ch;
    return 0;

}

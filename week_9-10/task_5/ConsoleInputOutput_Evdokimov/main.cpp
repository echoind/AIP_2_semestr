#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
/*
y = 2x^2- 3, если x > 7
y = 0, если x = 7
y = 2 * |x| + 3, если x < 7
*/

int main(){
    float y,x;
    std::cin>>x;
    if(x>7)
       y=2*x*x-3;
    if(x==7)
       y=0;
    if(x<7)
       y=2*abs(x)+3;
    std::cout<<y<<endl;
    return 0;
}

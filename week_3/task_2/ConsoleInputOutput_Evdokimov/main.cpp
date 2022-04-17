#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
/*
y = 2x - 15, если x > 2
y = 5, если x = 2
y = 3 * |x-1| - 8, если x < 2
*/

int main(){

    int x,y;

    std::cin>>x;
    if(x>2)
    y = 2*x-15;
    if(x==2)
    y = 5;
    if(x<2)
    y = 3 * abs(x-1) - 8;
    std::cout <<"y = "<< y << endl;

    return 0;

}

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
y = 2x - 10, если x > 3
y = 10, если x = 3
y = ((2 * x+1)^2) - 1, если x < 3
*/

int main(){

    int x,y;

    std::cin>>x;
    if( x>3 )
    y = 2*x - 10;

    if( x==3 )
    y = 10;

    if( x<3 )
    y = (2*x+1)*(2*x+1)-1;

    std::cout <<"y = "<< y << endl;

    return 0;

}


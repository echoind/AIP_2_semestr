#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main(){

    const float r = 1;
    float x,y;

    std::cin>>x>>y;
    float L = sqrt(x*x+y*y);

    bool obl1 = (L<r) && (y>=x);
    bool obl2 = (L<r) && (y>=-x);

    if(obl1 && obl2)
    std::cout << "v o blasti" << endl;
    else
    std::cout << "ne v oblasti" << endl;

    return 0;

}


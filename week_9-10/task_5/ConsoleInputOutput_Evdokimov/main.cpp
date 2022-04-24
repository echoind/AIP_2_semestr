#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

           for (int i = 0; i <=185/15; i++)
             for (int j = 0; j <= 185/17; j++)
               for (int k = 0; k <= 185/21; k++)
               if (15*i+17*j+21*k==185) cout <<"15*"<<i<<" + 17*"<<j<<" + 21*"<<k<<"=185\n";

    return 0;
}

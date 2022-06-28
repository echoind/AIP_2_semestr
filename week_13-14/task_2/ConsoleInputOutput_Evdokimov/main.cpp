#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>
#include <stdlib.h>

using namespace std;

/*
Сгенерировать массив со случайными числами в диапазоне:  [5,15]
Вычислить сумму элементов массива:
b. больших 9, меньших 20, меньших 3,
*/


int main() {
     const int n = 10;
     int M[n], sum1 = 0, sum2 = 0, sum3 = 0;
     for(int i=0; i<n; i++){
     M[i] = 15 * rand()/RAND_MAX+5;

     if(M[i] > 9)
     sum1 += M[i];

     if(M[i] < 20)
     sum2 += M[i];

     if(M[i] < 3)
     sum3 += M[i];
     }
     for(int i=0; i<n; i++)
     std::cout << M[i] <<  std::endl;
     std::cout <<"summa (> 9)=  "<< sum1 <<  std::endl;
     std::cout <<"summa (< 20)=  "<< sum2 <<  std::endl;
     std::cout <<"summa (< 3)=  "<< sum3 <<  std::endl;
     return 0;
}




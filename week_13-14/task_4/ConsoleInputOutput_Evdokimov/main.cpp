#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>
#include <stdlib.h>

using namespace std;

/*
7. Найти среднее арифметическое положительных/отрицательных
*/


int main() {
     const int n = 10;
     int M[n], sum1 = 0, sum2 = 0, sum3 = 0, SumPozitiv = 0;
     int max = 0;

     for(int i=0; i<n; i++){
     M[i] = 15 * rand()/RAND_MAX+5;

     if(M[i] > 9)
        sum1 += M[i];

     if(M[i] < 20)
        sum2 += M[i];

     if(M[i] < 3)
        sum3 += M[i];

     if(M[i] > 0)
        SumPozitiv  += M[i];

     if (M[i] > max) {
        max = M[i];
        }
     }
     for(int i=0; i<n; i++)
     std::cout << M[i] <<  std::endl;
     std::cout <<"summa (> 9)=  "<< sum1 <<  std::endl;
     std::cout <<"summa (< 20)=  "<< sum2 <<  std::endl;
     std::cout <<"summa (< 3)=  "<< sum3 <<  std::endl;
     std::cout <<"SumPozitiv=  "<< SumPozitiv <<  std::endl;
     std::cout <<"MAX=  "<< max <<  std::endl;
     return 0;
}


#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>
#include <stdlib.h>

using namespace std;

/*
 Создать новый массив из двух других массивов путём операций над элементами
массивов:
a. перемножения
*/


int main() {
     const int n = 10;
     int A[n], B[n], C[n];


     for(int i=0; i<n; i++){
        A[i] = 15 * rand()/RAND_MAX+5;
        B[i] = 15 * rand()/RAND_MAX+5;
        C[i] = A[i] * B[i];
        }


     for(int i=0; i<n; i++)
        std::cout << A[i]  << "   " << B[i] << "   " << C[i] <<  std::endl;
}

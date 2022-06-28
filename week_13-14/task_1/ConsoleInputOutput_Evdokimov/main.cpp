#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>
#include <stdlib.h>

using namespace std;

/*
Сгенерировать массив со случайными числами в диапазоне:  [5,15]
*/


int main() {
     const int n = 10;
     int arrA[n];
     for(int i=0; i<n; i++){
     arrA[i] = 15 * rand()/RAND_MAX+5;
     }
     for(int i=0; i<n; i++)
     std::cout << arrA[i] <<  std::endl;
     return 0;
}


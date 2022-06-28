#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

//Напишите функцию, которая будет умножать комплексные числа.

struct Chislo{
      int Re;
      int i;
};

void SUMMA(Chislo X, Chislo Y){
    int h,m;
    h = X.Re * Y.Re ;
    m = X.i * Y.i ;
    std::cout << h << m;
}

int main(){
    Chislo A = {1,2};
    Chislo B = {4,-3};
    SUMMA(A,B);
    return 0;
}


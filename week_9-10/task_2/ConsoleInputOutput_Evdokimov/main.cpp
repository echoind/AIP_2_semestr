#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;





       /*Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг:
    значение A переходит в B, значение B — в C, значение C — в A (A, B, C —
    вещественные параметры, являющиеся одновременно входными и выходными). С
    помощью этой процедуры выполнить правый циклический сдвиг для двух данных
    наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).
       */
int main(){

       int d;
       int n;
       int x;
       float y;
       std::cout<<" n(diapazon), d(shag) , x(argument):  ";
       std::cin>>n>>d>>x;
       for(int i = 0; i < n; i+=d ){
           y = (2+x)*(2+x)+3*x;
           x = x + d;
           std::cout<<"\t"<<x<<"\t"<<y<<std::endl;
       }

       return 0;

}

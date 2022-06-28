#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
/*
10. Робот-самолёт описывается как структура с полями: скорость вращения винта,
радиус винта, коэффициент тяги. Напишите функцию для расчёта тяги,
создаваемую винтом (произведение всех характеристик).
*/

struct Robot{
      int speed;
      int rad;
      int koef;
};

void MaxSpeed(Robot X){
      int Tyaga;
      Tyaga = X.speed*X.rad*X.koef;
      std::cout<<"tyaga="<<Tyaga;
}

int main(){
    Robot A = {3, 6, 5};
    Robot B = {2, 7, 6};
    MaxSpeed(B);
    return 0;
}

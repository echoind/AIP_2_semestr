#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*5. Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом быстром роботе.*/

struct Robot{
      int gab;
      int ves;
      int speed;
};

void MaxSpeed(Robot X, Robot Y){
    if(X.speed > Y.speed){
        std::cout << X.gab<<endl;
        std::cout << X.ves<<endl;
        std::cout << X.speed<<endl;
    }
    else{
        std::cout << Y.gab<<endl;
        std::cout << Y.ves<<endl;
        std::cout << Y.speed<<endl;
    }
}

int main(){
    Robot A = {3, 6, 5};
    Robot B = {2, 7, 6};
    MaxSpeed(A,B);
    return 0;
}

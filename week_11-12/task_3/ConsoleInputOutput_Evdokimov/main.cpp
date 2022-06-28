#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/* 7. Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о датчике с наименьшей
скоростью работы.*/

struct Datchik{
      int min;
      int max;
      float pogr;
      int speed;
};

void MinSpeed(Datchik X, Datchik Y){
    if(X.speed < Y.speed){
        std::cout << X.min<<endl;
        std::cout << X.max<<endl;
        std::cout << X.pogr<<endl;
        std::cout << X.speed<<endl;
    }
    else{
        std::cout << Y.min<<endl;
        std::cout << Y.max<<endl;
        std::cout << Y.pogr<<endl;
        std::cout << Y.speed<<endl;
    }
}

int main(){
    Datchik A = {0, 10, 0.1, 3};
    Datchik B = {0, 12, 0.15, 2};
    MinSpeed(A,B);
    return 0;
}

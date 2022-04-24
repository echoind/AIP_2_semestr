#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

       //Протабулировать функцию (шаг и диапазон задаёт пользователь):
       // y = sqrt(5*x+4*x*x*x)+4*x+3/sin(9*x+71);
       int d;
       int n;
       int x;
       float y;
       std::cout<<" n(diapazon), d(shag) , x(argument):  ";
       std::cin>>n>>d>>x;
       for(int i = 0; i < n; i+=d ){
           y = sqrt(5*x+4*x*x*x)+4*x+3/sin(9*x+71);
           x = x + d;
           std::cout<<"\t"<<x<<"\t"<<y<<std::endl;
       }

       return 0;

}

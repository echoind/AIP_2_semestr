#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

       //Протабулировать функцию (шаг и диапазон задаёт пользователь):
       // y = (2+x)*(2+x)+3*x;
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

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
1. Создайте структуру, которая хранит время: часы, минуты, секунды.
a. Написать функцию, которая складывает два времени.
*/

struct Time{
      int hour;
      int minutes;
      int seconds;
      };

void SUMMA(Time X, Time Y){
    int h,m,s;
    h = X.hour + Y.hour ;
    m = X.minutes + Y.minutes ;
    s = X.seconds + Y.seconds ;
    std::cout << h << m << s;
}

int main(){
    Time A = {1,2,3};
    Time B = {1,2,3};
    //std::cin >> A.hour >> A.minutes >> A.seconds;
    //std::cout << std::endl;
    //std::cin >> B.hour >> B.minutes >> B.seconds;
    SUMMA(A,B);
    return 0;
}

/*
void funkciya(){

    struct Point3d {
     int x, y, z;
     int size;
    };
    Point3d pA;
    Point3d pB = {4,3}; // инициализация
    pA.x = 3;
    pA.y = 5;
    std::cout << pA.x << pA.y << pA.z << pA.size << std::endl;
    std::cout << pB.x << pB.y << pB.z << pB.size << std::endl;
}

int main(){

    funkciya();
    return 0;

}

struct Student{
 string name;
 int age;
 float mark_avg;
};
void showStudent(const Student s){
 cout << s.name<< "\t"
 << s.age << "\t"
 << s.mark_avg << endl;
}
Student compareStudents(Student A, Student B){
 if (A.age < B.age)
 return A;
 else
 return B;
}
int main(){
 Student ivanoff = {"Ivanoff", 21, 4.5};
 Student petroff = {"Petroff", 20, 4.5};
 Student minAger;
 minAger = compareStudents(ivanoff, petroff);
 return 0;
}
*/

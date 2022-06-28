#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>
#include <stdlib.h>
#include <fstream>

using namespace std;

/*
19. Картотека видеотеки организована в виде массива структур с полями: название
фильма, стоимость, режиссер. Ввести информацию по видеотеке.
a. вывести информацию о фильмах, начиная с фильма с минимальной
стоимостью.
b. вывести информацию о фильмах, которые расположены между фильмами с
максимальной и минимальной стоимостью.
c. вывести информацию о количестве режиссеров, чьи фильмы находятся в
видеотеке и их фамилии.
*/

struct Film{
    string name;
    int price;
    string producer;
};

void showFilm(const Film S){
    std::cout << S.name<< "\t"
    << S.price << "\t"
    << S.producer << std::endl;
}

Film A = {"shrek" , 100, "vasya"};
Film B = {"avatar" , 300, "petya"};
Film C = {"hto ya" , 200, "ibragim"};

void minPrice(Film S[], int max){
    for(int i=0; i<2; i++){
        if(S[i].price > max)
            S[i].price = max;
            showFilm(S[i]);
    }
}

int main(){
    Film Films[3];
     minPrice(Films, 0);
}

/*


struct Robot{
     int version;
     int velocity;
     float mass;
};
void showRobot(const Robot s){
     std::cout << s.version<< "\t"
     << s.velocity << "\t"
     << s.mass << std::endl;
}
int findVelocity(const Robot s[], int len, float key){
     int count = 0;
     for(int i=0; i<len; i++){
         if(s[i].velocity > key){
             showRobot(s[i]);
             count++;
         }
     }
     return count;
}
void write2File(const Robot s[], const int len){
     std::ofstream f;
     f.open("data.txt");
     if(!f.is_open()){
         std::cout << "Error. Unable to open file!" << std::endl;
         return;
     }
     for(int i = 0; i < len; i++)
     f << s[i].version<< "\t"
     << s[i].velocity << "\t"
     << s[i].mass << std::endl;
     f.close();
 }
 int main(){
      const int len = 10;
      Robot students[len];
      for(int i=0; i<len; i++){
          students[i].velocity = rand() % 25;
          students[i].mass = 5.0* (float) rand()/RAND_MAX;
          students[i].version = rand() % 3 + 1;
          showRobot(students[i]);
      }
      float velocity = 15.0;
      std::cout << std::endl << "Find all who more than " <<
     velocity << std::endl;
      int findCount = findVelocity(students, len, velocity);
      std::cout << "Total " << findCount << " elements" <<
      std::endl;
      write2File(students, len);
      return 0;
 }
*/


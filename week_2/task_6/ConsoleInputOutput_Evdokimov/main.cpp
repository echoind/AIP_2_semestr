#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void func(){
    float min_lojka;
    std::cin>>min_lojka;
    float stolovaya_lojka = min_lojka/30;
    float cup = min_lojka/300;
    std::cout <<"min lojka = "<< min_lojka << std::endl
             <<"stolovaya lojka = "<< stolovaya_lojka << std::endl
             <<"cup = " << cup << std::endl;
    }

int main(){

    func();

    return 0;

}

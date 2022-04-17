#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    float min_lojka;
    std::cout <<"massa min lojka"<< std::endl;
    std::cin>>min_lojka;
    float stolovaya_lojka = min_lojka/30;
    float cup = min_lojka/300;
    std::cout <<"min lojka = "<< min_lojka << std::endl
              <<"stolovaya lojka = "<< stolovaya_lojka << std::endl
              <<"cup = " << cup << std::endl;

    return 0;

}

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int n;
    std::cin>>n;
    for(int i=0; i < n+1; i++){
    for(int j=0; j < i; j++)
    std::cout << 0;
    std::cout << std::endl;
    }
    std::cout<< std::endl;

    return 0;
}

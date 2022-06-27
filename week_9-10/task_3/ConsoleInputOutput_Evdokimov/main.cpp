#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Even(int k){
    if(k % 2 == 0){
    std::cout << "true";
    std::cout << endl;
    }
    else{
    std::cout << "false";
    std::cout << endl;
    }
}

int main(){
     int n;
     std::cin >> n;
     Even(n);
     return 0;
}

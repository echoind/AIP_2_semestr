#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*Описать процедуру DigitCountSum(K, C, S), находящую количество C цифр целого
    положительного числа K, а также их сумму S (K — входной, C и S — выходные
    параметры целого типа). С помощью этой процедуры найти количество и сумму
    цифр для каждого из пяти данных целых чисел
*/

int main(){
    int K,C,S;
    std::cout<<"Vvedite K"<<endl;
    std::cin>>K;
    //C = log10(K)+1;
    while (K!=0)
        {
           S += K%10;
            K /= 10;
        }
    //std::cout<<"kolichestvo=" << C<<endl;
    std::cout<<"summa=" << S<<endl;
    return 0;
}

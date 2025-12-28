#include <iostream>
#include <string>


int main() {

    int FN;
    std::string SN;
    int resul = 0;

    std::cin >> FN;
    std::cin >> SN;

    for (int i = 0; i < FN; i++) {

        resul += SN[i] - '0';
    }

    std::cout << resul;
    
}
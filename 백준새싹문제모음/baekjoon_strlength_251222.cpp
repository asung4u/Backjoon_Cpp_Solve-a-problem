#include <iostream>
#include <string>


int main() {

    char engstr[101];       // 마지막 종료 문자 때문에 100이 아닌 101크기로 설정
    std::cin >> engstr;

    std::string engstrlen = engstr;     // string 형태로 변환  

    std::cout << engstrlen.length();


    return 0;
}
#include <iostream>
#include <string>


int main() {

    int A, B, C;

    std::cin >> A >> B >> C;    // int 형식으로 모두 받음

    std::cout << A + B - C << "\n";     // 정수 계산 출력
    
    std::string strAB = std::to_string(A) + std::to_string(B);  // A와 B는 문자열로 변환 후 계산

    std::cout << std::stoi(strAB) - C;  // 문자열로 합친 A와 B를 다시 정수로 변환 후 정수 계산

    return 0;
}
#include <iostream>

int main() {

    int N;          // 입력할 별의 갯수 혹은 줄의 수
    std::cin >> N;  // 입력 함수

    for(int i = 0; i < N; i++) {        // 줄의 수 만큼 반복

        for(int j = 0; j <= i; j++) {   // 줄의 순서만큼 별 찍기

            std::cout << "*";
        }

        std::cout << "\n";  // 별의 출력이 끝난 후 줄 바꿈
    }

    return 0;
}
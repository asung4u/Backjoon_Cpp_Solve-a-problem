#include <iostream>

int main() {

    int N;      // 수열 A의 크기
    int X;    // 정수 X


    std::cin >> N >> X;     // 첫째 줄 N과 X입력

    if (N < 1 || N > 10000 || X < 1 || X > 10000) {   // N과 X가 범위를 넘어가면 프로그램 종료

        std::cout << "(1 ≤ N, X ≤ 10,000) 값만 넣어주세요.";
        return 0;
    }


    int arrA[N];    // 수열 A
    
    for (int i = 0; i < N; i++) {   // 수열 A의 들어갈 정수 입력

        std::cin >> arrA[i];
    }

    for (int i = 0; i < N; i++) {   // 수열 A의 숫자와 정수 X의 크기 비교

        if (arrA[i] < X) {          // i번째 숫자가 정수 X보다 작으면 출력

            std::cout << arrA[i] << " ";
        }
    }

    return 0;
}
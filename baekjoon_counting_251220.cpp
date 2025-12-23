#include <iostream>

int main() {

    int N;          // 배열에 들어가는 정수의 갯수
    int v;          // 찾고자 하는 정수
    int c = 0;      // 찾고자 하는 정수의 갯수

    std::cin >> N;  


    int arrA[N];    // 정수를 담을 배열

    for (int i = 0; i < N; i++) {    // 배열에 정수 입력

        std::cin >> arrA[i];
    }


    std::cin >> v;

    for (int i = 0; i < N; i++) {   // 배열에 있는 정수와 v를 비교해서 같으면 c 증가

        if (arrA[i] == v) {

            c++;
        }
    }

    std::cout << c;

    return 0;
}
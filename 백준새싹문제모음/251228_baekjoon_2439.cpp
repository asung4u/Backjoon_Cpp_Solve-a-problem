# include <iostream>


int main() {

    int N;

    std::cin >> N;

    for (int i = 0; i < N; i++) {   // 줄의 갯수

        for (int j = N - 1; j >= 0; j--) {  // 줄의 갯수에 맞게 공배 혹은 별 출력

            if (j > i) {    // 전체 줄의 갯수 - 현재 줄 순서 만큼 공백 출력

                std::cout << " ";
            } else {        // 현재 줄 순서 만큼 별 출력

                std::cout << "*";
            }
        }

        std::cout << "\n";
    }
}
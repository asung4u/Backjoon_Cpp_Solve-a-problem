#include <iostream>

int main() {

    int N, M;   // N은 행, M은 열

    std::cin >> N >> M;

    
    int arrA[N][M];     // 행렬 A
    int arrB[N][M];     // 행렬 B

    // A행렬

    for (int i = 0; i < N; i++) {       // 행 반복문

        for (int j = 0; j < M; j++) {   // 열 반복문

            std::cin >> arrA[i][j];
        }
    }


    // B행렬

    for (int i = 0; i < N; i++) {       // 행 반복문

        for (int j = 0; j < M; j++) {   // 열 반복문

            std::cin >> arrB[i][j];
        }
    }


    // 각 행렬 더하기

    for (int i = 0; i < N; i++) {       // 행 반복문

        for (int j = 0; j < M; j++) {   // 열 반복문

            std::cout << arrA[i][j] + arrB[i][j] << " ";
        }

        std::cout << "\n";
    }

    return 0;
}
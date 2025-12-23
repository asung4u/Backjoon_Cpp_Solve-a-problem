#include <iostream>

    // 전역 변수 배열은 자동으로 0으로 값을 넣어줌
    // 지역 변수 배열은 쓰레기 값이 자동으로 들어감 (주의)

int main() {

    int arrA[30] = {};  // 제출한 출석번호 확인을 위한 배열
    int arrN[2] = {};   // 미 제출한 출석번호 확인을 위한 배열
    int s;
    int N = 0;


    for (int i = 0; i < 28; i++) {  // 제출한 출석번호 입력

        std::cin >> s;

        arrA[s-1] = 1;  // 제출한 출석번호 순서의 배열에 1을 추가
    }


    for (int i = 0; i < 30; i++) {  // 미 제출 출석번호를 찾기위한 반복문

        if (arrA[i] == 0) {     // 각 항목의 0을 찾아 arrN 배열에 추가. 낮은 수 부터 차례로 입력

            arrN[N] = i + 1;
            N++;
        }
    }


    std::cout << arrN[0] << "\n" << arrN[1];

    return 0;
}
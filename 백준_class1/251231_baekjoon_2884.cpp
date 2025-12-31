#include <iostream>


int main() {


    int H, M, RM;

    std::cin >> H >> M;

    if (M - 45 < 0) {   // 입력한 분이 45분보다 작을 떄

        H -= 1;
        
        M += 15;

        if (H < 0) {    // 위의 조건을 만족하고, 입력한 시간이 0시일 때

            H = 23;
        }

    } else {    

        M -= 45;
    }

    
    std::cout << H << " " << M;


    return 0;
}
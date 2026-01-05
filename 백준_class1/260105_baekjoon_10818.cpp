#include <iostream>
#include <string>
#include <vector>


int main() {

    int N;                  // 입력할 정수 갯수
    int MaxnSet, MinnSet;   // 최대,최솟 값
    
    // 입력
    std::cin >> N;

    std::vector<std::string> nSet(N);     // 입력한 정수를 저장할 문자열

    for(int i = 0; i < N; i++) {

        std::cin >> nSet[i];
    }


    // 최댓값 구하기
    MaxnSet = std::stoi(nSet[0]);

    for(int i = 1; i < N; i++) {

        if(MaxnSet < std::stoi(nSet[i])) {

            MaxnSet = std::stoi(nSet[i]);
        }
    }
    
    
    // 최솟값 구하기
    MinnSet = std::stoi(nSet[0]);

    for(int i = 1; i < N; i++) {

        if(MinnSet > std::stoi(nSet[i])) {

            MinnSet = std::stoi(nSet[i]);
        }
    }

    
    // 출력
    std::cout << MinnSet << " " << MaxnSet;


    return 0;
}
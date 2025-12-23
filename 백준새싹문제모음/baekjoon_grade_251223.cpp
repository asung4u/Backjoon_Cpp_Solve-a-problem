# include <iostream>
# include <map>
# include <string>
# include <iomanip>


int main() {

    std::map<std::string, float> gradeScore = { //std::map 을 이용해 키/값 구조로 저장

        {"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7},
        {"B+", 3.3}, {"B0", 3.0}, {"B-", 2.7},
        {"C+", 2.3}, {"C0", 2.0}, {"C-", 1.7},
        {"D+", 1.3}, {"D0", 1.0}, {"D-", 0.7},
        {"F", 0.0}
    };

    std::string studentScore;

    std::cin >> studentScore;   // 입력 받는 학생의 점수를 키로

    std::cout << std::fixed << std::setprecision(1) << gradeScore[studentScore];  // 값을 불러옴
                // 소수점 1자리까지 출력하기 위함

    return 0;
}
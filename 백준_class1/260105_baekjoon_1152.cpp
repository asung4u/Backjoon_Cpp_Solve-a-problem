#include <iostream>

// 처음과 끝에 공백 지우는 함수
std::string trim(const std::string& str) {

    size_t start = 0;
    while (start < str.length() && std::isspace(str[start])) start++;

    size_t end = str.length();
    while (end > start && std::isspace(str[end - 1])) end--;

    return str.substr(start, end - start);  // .substr() 문자열 재조정
}


int main() {

    std::string str;

    // 공백 포함 한 줄 저장
    std::getline(std::cin, str);

    // 처음과 끝 공백 지우기
    std::string trimmed = trim(str);


    int spaceCount = 0;
    // 문자열 대조로 공백 갯수 세기
    for (char ch : trimmed) {

        if (ch == ' ') {

            spaceCount++;
        }
    }

    // 출력
    if (trimmed.empty()) {

        std::cout << 0;
    } else {

        std::cout << spaceCount + 1;
    }


    return 0;
}
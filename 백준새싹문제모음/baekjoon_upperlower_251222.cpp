#include <iostream>
#include <string>
#include <cctype>


int main() {

    char orichr[101];       // 최대 100글자 형태

    std::cin >> orichr;     // 값 입력

    std::string oristr = orichr;    // string 형태로 저장

    for (int i = 0; i < oristr.length(); i++) {

        char compc = oristr[i]; // 대소문자 구분을 위해 i번째 글자 저장

        if (isupper(compc)) {   // i번째 글자가 대문자인지 확인

            compc = tolower(compc);     // 맞으면 소문자로 변환

        } else if (islower(compc)) {    // i번 째 글자가 소문자인지 확인

            compc = toupper(compc);     // 맞으면 대문자로 변환
        }

        oristr[i] = compc;      // 변환한 i번째 글자로 다시 정의
    }


    std::cout << oristr;


    return 0;
}
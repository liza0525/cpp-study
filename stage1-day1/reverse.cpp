#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "문자열을 입력하세요: ";
    std::cin >> s;

    char temp;
    const std::size_t s_size = s.size();  // 가독성으론 ok이지만, 성능 차이는 거의 없다.

    for (std::size_t i = 0; i < s_size / 2; i ++) {
        temp = s[i];
        s[i] = s[s_size- 1 - i];
        s[s_size - 1 - i] = temp;

        /*
            참고: 자리를 바꾸는 swap이라는 함수가 있다.
            std::swap(s[i], s[s_size - 1 - i]);
        */
    }

    std::cout << s << '\n';

    return 0;
}

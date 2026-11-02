// 소수 판별기 만들기
#include <iostream>

bool check_is_prime (int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2 ; i * i <= n ; i ++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int n;    
    while (true) {
        std::cout << "정수를 입력하세요: ";
        if(!(std::cin >> n)) {  // cin >> n은 cin 자신을 리턴하고, 입력에 실패했으면 cin이 false로
            std::cout << "정수를 입력해주세요.\n";
            std::cin.clear();  // cin의 실패 상태를 초기화 (이걸 안 하면 이후 입력을 아예 시도하지 않음)
            std::cin.ignore(10000, '\n');  // 버퍼에 남은 잘못된 입력을 줄바꿈까지(최대 10000자) 버림
        } else {
            break;
        }
    }

    bool is_prime = check_is_prime(n);
    if (is_prime) {
        std::cout << "소수입니다.\n";
    } else {
        std::cout << "소수가 아닙니다.\n";
    }

    return 0;
}

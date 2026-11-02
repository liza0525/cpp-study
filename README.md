# cpp-study

C++을 공부하는 기록

## 커리큘럼

> 커리큘럼은 C, 자바, 아두이노 경험이 있다는 배경에 맞춰서 Claude와 커리큘럼 작성
>
> 필요한대로 추후 업데이트 예정

- [ ] Stage 1. 워밍업: 기본 문법, 포인터, 참조와 const
- [ ] Stage 2. 객체지향: 클래스, 생성자/소멸자, RAII, 상속과 virtual
- [ ] Stage 3. 모던 C++: 스마트 포인터, 이동 시맨틱, 람다
- [ ] Stage 4. STL / 템플릿 / CMake

## 구조

```
stage{N}-day{N}/   실습 소스
bin/               실행 파일 (git 제외)
```

## 빌드

```bash
g++ -std=c++20 -Wall -Wextra stage1-day1/file_name.cpp -o bin/file_name
./bin/file_name
```

## 참고

- [learncpp.com](https://www.learncpp.com)

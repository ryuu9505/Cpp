#include <iostream>
// #define SQUARE(n) ((n)*(n)) // macro function of C
using namespace std;

inline int SQUARE(int n) // inline function of C++
{
	return n * n;
}

int main()
{
	cout << SQUARE(3) << endl; // 9
}

// 결과
// macro : SQUARE(3) is changed to ((3)*(3)) by preprocessor
// inline : "(?) by compiler 

// 단점
// macro는 복잡한 함수는 만들기 어려움
// inline은 자료형에 의존적 (template를 사용하면 보완가능)


/* 'macro' 유래
본래 매크로라는 개념 자체는 프로그래밍 언어의 기능에서 처음 등장한다. 
C/C++ 등, 매크로를 지원하는 언어에서 약식 문법을 정의하면, 
컴파일러가 컴파일을 하기 전에 약식 문법으로 정의된 코드를 원래 코드로 변환을 한 후 컴파일한다. 
이 기능이 처음 도입된 Lisp에서는 이 원래 코드로 변환하는 키워드를 원래 코드를 크게 확장한다는 의미에서 macroexpand라고 불렀고, 
이 확장 규칙을 macro라고 부르는데, 이후의 언어들에서도 이 용어로 굳어지게 되었다.
*/

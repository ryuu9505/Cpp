#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>

//////////////////////////////
// Function Template
//////////////////////////////

// Swap Function Template
template <typename T>
void Swap(T* a, T* b)
{
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// Max Function Template
template <typenmae T>
T Max(T a, T b)
{
	return a >= b ? a : b;
}

// Specialization of Max Function Template
template <>
char* Max(char* a, char* b) // "char* Max()는 이 함수를 사용하라"
{
	return strlen(a) >= strlen(b) ? a : b;
}

template <>
const char* Max(const char* a, const char* b) // "const char* Max()는 이 함수를 사용하라"
{
	return strcmp(a, b) >= 0 ? a : b;
}

//////////////////////////////
// Class Template
//////////////////////////////

// Point Class Template
template <typename T>
class Point
{
private:
	T xpos, y pos;
public:
	Porint(T x = 0, T y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
}

// Splitting Declaration and Definition of Function in Class Template 
template <typename T>
class Temp
{
public:
	T Func(const T& ref); // Declaration
};

template <typename T>
T Temp<T>::Func(const T& ref) // Definition
{
	// ...
}

// 템플릿을 포함한 파일을 분할할 때 고려해야 할 사항
/*
	Template.h Template.cpp main.cpp로 분할 하는 경우
	
	컴파일은 파일단위로 이루어지므로 main.cpp를 컴파일 하는 동안은 template.cpp을 참조 하지 않음
	즉 main.cpp에서는 템플릿에 대한 정보가 없으므로 템플릿 함수나 클래스를 만들 수 없음

	템플릿을 포함한 파일 분할 방법 2가지 :
	1. template.h에 템플릿의 생성자와 멤버함수의 정의를 모두 넣는다.
	2. main.cpp에 #include "Template.cpp"를 넣는다.
*/


int main()
{
	int a = 1, b = 2;
		
	Swap<int>(&a, &b); printf("%d %d", a, b);
	
	cout << Max<int>(3, 7) << endl;
	cout << Max("Hello", "World!") << endl; // Function Template은 자료형의 생략 가능 (컴파일러가(?) 자료형을 판단)
	
	Point<int> pos1(3, 4); pos1.ShowPosition();
	Point<double> pos2(3.13, 4.55); pos2.ShowPosition();
	Point<char> pos3('P', 'F'); pos3.ShowPosition();
}

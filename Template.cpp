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

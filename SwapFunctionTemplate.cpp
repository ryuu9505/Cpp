#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

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

int main()
{
	int a = 1, b = 2;

	Swap<int>(&a, &b);

	printf("%d %d", a, b);
}

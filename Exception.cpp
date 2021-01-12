#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespaces std;

//////////////////////////////
// 예외 처리의 예
//////////////////////////////

// Using just if
int main()
{
  cin >> numerator >> denominator; // 예외 발생

  if (denominator == 0) // 예외 발견
    cout << "Error : Division by zero" << endl; // 예외 처리
  else
    cout << numerator/denominator << endl;
  // 단점 : 예외처리 코드와 다른 코드들 사이의 구분이 어려움
}
  

// Using try, catch and throw
int main()
{
  cin >> numerator >> denominator; // 예외 발생

  try 
  { // 예외발생을 검사하는 범위 (예외발생 예상지역)
    if (denominator == 0) // 예외 발견
      throw denominator; // catch()의 인자로서 denominaotr를 던짐 (catch()로 이동)
    cout << numerator/denominator << endl; // 실행 X
  }
  catch(int expn) // 잡음
  {
    cout << "Error : Division by " << expn << endl; // 예외 처리
  }
}


// Stack Unwinding
void Devide(int numerator, int denominator)
{
  if(denominator == 0)
    throw denominator; // try, catch 없는 함수에서 throw하면 함수 호출한 곳에서 throw됨
  cout << numerator/denominator << endl;
}

int main()
{
  try
  {
    Divide(numerator, denominator); // 여기서 throw
  }
  catch(int expn)
  {
    cout << "Error : Division by " << expn << endl; // 예외 처리    
  }
}


// 하나의 try 블록과 다수의 catch() 블록
try
{
  
}
catch(char ch)
{
  
}
catch(int n)
{
    
}


// 클래스의 객체도 예외 데이터가 될 수 있다.



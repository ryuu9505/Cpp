#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespaces std;

//////////////////////////////
// 예외 처리 : if
//////////////////////////////
/*
cin >> numerator >> denominator; // 예외 발생

if (denominator == 0) // 예외 발견
  cout << "Error : Division by zero" << endl; // 예외 처리
else
  cout << numerator/denominator << endl;
*/
// 단점 : 예외처리 코드와 다른 코드들 사이의 구분이 어려움


//////////////////////////////
// 예외 처리 : try, catch and throw
//////////////////////////////
/*
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
*/

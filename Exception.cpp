#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespaces std;

//////////////////////////////
// if 예외 처리
//////////////////////////////
/*
cin >> numerator >> denominator; // 예외 발생

if (denominator == 0) // 예외 발견
  cout << "Error : Division by zero" << endl; // 예외 처리
else
  cout << numerator/denominator << endl;
*/
// 단점 : 예외처리 코드와 다른 코드들 사이의 구분이 어려움

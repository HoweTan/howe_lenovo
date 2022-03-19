// N阶乘.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int fun(int n)
{
	int p = n;
	if (p == 1 || p == 0)
		return 1;
	return fun(p - 1)*p;
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << fun(n) << endl;
	}
    return 0;
}


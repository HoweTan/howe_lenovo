// N�׳�.cpp : �������̨Ӧ�ó������ڵ㡣
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


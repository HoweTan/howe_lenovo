// 判断素数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
bool issushu(int n)
{
	int p = n;
	if (p < 2) return false;
	else if (p == 2)return true;
	else
	{
		for (int i = p - 1; i >= 2; i--)
		{
			if (p%i == 0)
				return false;
		}
	}
	return true;
}

int main()
{
	int n;
	while (cin >> n)
	{
		if (issushu(n))
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
    return 0;
}


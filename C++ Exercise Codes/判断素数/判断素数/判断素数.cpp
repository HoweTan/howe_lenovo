// 判断素数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
bool issushu(int n)
{
	int p = n;
	if (p < 2)return false;
	else
		for (int i = p - 1; i >= 2; i--)
		{
			if (p%i == 0)
			{
				return false;
				break;
			}
		}
	return true;
}

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 1; i < n + 1; i++)
		{
			if (issushu(i))
				cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}


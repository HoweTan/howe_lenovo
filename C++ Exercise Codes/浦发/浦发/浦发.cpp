// 浦发.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	long int x;
	while (cin >> x)
	{
		int sum = 0;
		while (x != 0)
		{
			int y = x % 10;
			if (y % 2 == 0)
				sum += y;
			x /= 10;
		}
		cout << sum << endl;
	}
    return 0;
}


// �ַ�.cpp : �������̨Ӧ�ó������ڵ㡣
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


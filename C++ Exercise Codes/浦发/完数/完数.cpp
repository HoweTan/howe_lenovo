// ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 2; i < n; i++)
		{
			int s = 0;
			for (int j = 1; j < i; j++)
			{
				if (i%j == 0)
					s += j;
			}
			if (s == i)
				cout << i << endl;
		}
	}
    return 0;
}


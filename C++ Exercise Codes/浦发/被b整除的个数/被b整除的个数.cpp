// 被b整除的个数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n, b;
	while (cin >> n >> b)
	{
		int count = 0;
		for (int i = 1; i <= n; i++)
		{
			if (i%b == 0)
				count++;
		}
		cout << count << endl;
	}
    return 0;
}


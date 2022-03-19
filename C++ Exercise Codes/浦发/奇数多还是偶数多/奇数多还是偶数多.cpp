// 奇数多还是偶数多.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string str;
	while (cin >> str)
	{
		int num_even = 0;
		int num_odd = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if ((str[i] - '0') % 2 == 0)
				num_even++;
			else
				num_odd++;
		}
		if (num_even > num_odd)
			cout << "偶数多" << endl;
		else if (num_even < num_odd)
			cout << "奇数多" << endl;
		else
			cout << "奇数和偶数一样多" << endl;
	}
    return 0;
}


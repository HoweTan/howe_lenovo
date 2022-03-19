// 10进制to2进制.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;	
	while (cin >> n)
	{
		if (n == 0)
			cout << 0;
		string res;
		while (n != 0)
		{
			res += (n % 2 + '0');
			n /= 2;
		}
		reverse(res.begin(), res.end());
		cout << res << endl;
	}
    return 0;
}


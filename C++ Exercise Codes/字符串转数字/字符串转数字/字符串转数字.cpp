// 字符串转数字.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
long long strToint(string str)
{
	if (str.size() == 0)return 0;
	char temp = str[0];
	int len = str.size();
	int i = 0;
	long long res = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while (i < len)
	{
		if (str[i]<'0' || str[i]>'9')
			break;
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (temp == '-')
		res = -res;
	return res;
}
int main()
{
	string str;
	while (cin >> str)
	{
		long long res = strToint(str);
		cout << res << endl;
	}
	return 0;
}

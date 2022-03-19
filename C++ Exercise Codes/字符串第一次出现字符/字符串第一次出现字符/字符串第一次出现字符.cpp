// 字符串第一次出现字符.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		int count[26] = { 0 };
		for (int i = 0; i<str.size(); i++)
		{
			if (str[i] >= 'a'&&str[i] <= 'z')
				count[str[i] - 'a']++;
			else
				count[str[i] - 'A']++;
		}
		int j;
		for (j = 0; j<str.size(); j++)
		{
			if (count[str[j] - 'a'] == 1 || count[str[j] - 'A'] == 1)
			{
				cout << str[j] << endl;
				break;
			}
		}
		if (j == str.size())
			cout << -1 << endl;
	}
	return 0;
}

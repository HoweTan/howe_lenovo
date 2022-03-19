// huiwenstr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "123454321";
	string str1, str2;
	bool flag = true;
	for (int i = 0; i<s.length(); i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
		{
			str1+= s[i] - 'A' + 'a';
		}
		else if ((s[i] >= 'a'&&s[i] <= 'z') || s[i] >= '0'&&s[i] <= '9')
		{
			str1+= s[i];
		}
	}
	cout << str1 << endl;
    return 0;
}


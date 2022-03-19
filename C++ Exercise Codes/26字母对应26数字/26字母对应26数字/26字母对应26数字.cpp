// 26字母对应26数字.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int temp[26] = { 0 };
	char c = 'A';
	for (int i = 1; i < 27; i++)
	{
		temp[c - 'A'] = i;
		c++;
	}
	string str;
	while (cin>>str)
	{
		string res;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] >= 'A'&&str[i] <= 'Z')
				res += to_string(temp[str[i] - 'A']);
			else if(str[i] >= 'a'&&str[i] <= 'z')
				res += to_string(temp[str[i] - 'a']);
		}
		cout << res << endl;
	}
    return 0;
}


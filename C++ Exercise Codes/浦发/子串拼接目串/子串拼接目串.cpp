// 子串拼接目串.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
string process(string str)
{
	for (int i = 2; i <= str.size(); i++)
	{
		if (str.size() % i == 0)
		{
			int sub_len = str.size() / i;
			string sub_str = str.substr(0, sub_len);
			int j = 0;
			for (j = sub_len; j < str.size(); j += sub_len)
			{
				if (sub_str != str.substr(j, sub_len))
				{
					break;
				}
			}
			if(j>=str.size())
				return sub_str;
		}
	}
	return "";
}
int main()
{
	string str;
	while (cin >> str)
	{
		string res = process(str);
		if (res.size() < 1)
			cout << "false" << endl;
		else
			cout << res << endl;
	}
    return 0;
}


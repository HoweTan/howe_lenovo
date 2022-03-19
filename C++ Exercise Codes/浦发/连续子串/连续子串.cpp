// 连续子串.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		vector<string> res;
		for (int i = 0; i < str.size(); i++)
		{
			for (int j = 1; j < 3; j++)
			{
				res.push_back(str.substr(i, j));
			}
		}
		for (int i = 0; i < res.size()-1; i++)
		{
			cout << res[i] << endl;
		}
	}
    return 0;
}


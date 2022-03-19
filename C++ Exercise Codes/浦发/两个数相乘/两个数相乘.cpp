// 两个数相乘.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string s1, s2;
	
	while (cin >> s1 >> s2)
	{
		
		int len1 = s1.size() - 1;
		int len2 = s2.size() - 1;
		vector<int>tmp(len1 + len2 + 2);
		for (int i = len1; i >= 0; i--)
		{
			for (int j = len2; j >=0; j--)
			{
				int temp = (s1[i] - '0')*(s2[j] - '0');
				temp += tmp[i + j + 1];
				tmp[i + j] += temp / 10;
				tmp[i + j + 1] = temp % 10;
			}
		}
		int i = 0;
		while (i < len1 + len2 + 2 && tmp[i] == 0)
			i++;
		string res;
		for (; i < len1 + len2 + 2; i++)
			res += to_string(tmp[i]);
		cout << res << endl;
	}
    return 0;
}


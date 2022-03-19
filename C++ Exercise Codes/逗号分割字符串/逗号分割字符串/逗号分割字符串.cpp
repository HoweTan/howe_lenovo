// 逗号分割字符串.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		vector<string> vt;
		stringstream ss(str);
		string s;
		while (getline(ss, s, ','))
		{
			vt.push_back(s);
		}
		for (int i = 0; i < vt.size(); i++)
		{
			cout << vt[i] << " ";
		}
		cout << endl;
	}
    return 0;
}


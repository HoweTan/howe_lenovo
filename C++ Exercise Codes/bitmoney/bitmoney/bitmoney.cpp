// bitmoney.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, temp;
	vector<int>vt;
	while (cin >> n)
	{
		vt.push_back(n);
		if (cin.get() == '\n')
			break;
	}
	auto it = min_element(vt.begin(), vt.end());
	if (it == vt.end())
	{
		cout << 0;
	}
	else
	{
		auto it1 = max_element(it + 1, vt.end());
		int x = *it1 - *it;
		cout << x;
	}
	return 0;
}


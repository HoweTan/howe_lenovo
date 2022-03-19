// 最小奖金.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,b;
	cin >> n;
	vector<int>vt;
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		vt.push_back(b);
	}
	vector<int>tmp(0);
	for (int i = 1; i < n; i++)
	{
		if (vt[i] > vt[i - 1])
			tmp[i] = tmp[i + 1] + 1;
		else if (vt[i] == vt[i - 1])
			tmp[i] = tmp[i - 1];
		else
			tmp[i] = tmp[i - 1] - 1;
	}
	auto it = min_element(tmp.begin(), tmp.end());
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += (tmp[i] - *it + 1) * 100;
	cout << sum << endl;
    return 0;
}


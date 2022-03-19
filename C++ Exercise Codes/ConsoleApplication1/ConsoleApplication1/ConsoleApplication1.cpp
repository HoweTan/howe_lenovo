// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> vt;
	int b;
	for (int i = 0; i < n; i++)
	{
		vector<int>tmp;
		for (int j = 0; j < m; j++)
		{
			cin >> b;
			tmp.push_back(b);
		}
		vt.push_back(tmp);
	}	
	int left = 0;
	for (int i = 0; i<n; i++)
	{
		left= left+*max_element(vt[i].begin(), vt[i].end());
	}
	int up = n*m;
	int qian = 0;
	int maxval = 0;
	for (int j = 0; j<m; j++)//mie yi lie zui da zhi 
	{
		for (int i = 0; i<n - 1; i++)
		{
			maxval = max(vt[i][j], vt[i + 1][j]);
		}
		qian += maxval;
	}
	int su = (left + up + qian) * 2;
	cout << su << endl;
	return 0;
}
	
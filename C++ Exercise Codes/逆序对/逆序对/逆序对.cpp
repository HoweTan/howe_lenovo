// 逆序对.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>vt;
	int sum = pow(2, n);
	int b;
	for (int i = 0; i<sum; i++)
	{
		cin >> b;
		vt.push_back(b);
	}
	int m;
	cin >> m;
	vector<int>tmp;
	int c;
	for (int i = 0; i<m; i++)
	{
		cin >> c;
		tmp.push_back(c);
	}
	vector<int>::iterator it = vt.begin();
	vector<int>res;
	for (int i = 0; i<m; i++)
	{
		int count = 0;
		for (int i = 0; i < sum; i+= pow(2, tmp[i]))
		{
			reverse(vt.begin()+i, vt.begin() + i + pow(2, tmp[i])-1);
		}
		for (int j = 0; j<sum - 1; j++)
		{
			for (int i = j + 1; i<sum; i++)
			{
				if (vt[j]>vt[i])
					count++;
			}
		}
		res.push_back(count);
	}
	for (int i = 0; i<m; i++)
		cout << res[i] << endl;
	return 0;
}


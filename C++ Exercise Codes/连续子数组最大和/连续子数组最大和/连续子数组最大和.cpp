// ��������������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>vt;
	int b;
	while (cin >> b)
	{
		vt.push_back(b);
		if (cin.get() == '\n')
			break;
	}
	int sum = 0;
	int ans = vt[0];
	for (int i = 0; i < vt.size(); i++)
	{
		if (sum > 0)
			sum += vt[i];
		else
			sum = vt[i];
		ans = max(sum, ans);
	}
	cout << ans << endl;
    return 0;
}


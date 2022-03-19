// 质数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int low, high;
	int m, i;
	while (cin >> low >> high)
	{
		vector<int>tmp;
		int count_10 = 0;
		int count_00 = 0;
		for (m = 2; m<high; m++)
		{
			for (i = 2; i<m; i++)
				if (m%i == 0)break;
			if (m == i&&m >= low)
			{
				tmp.push_back(m);
			}
		}
		for (int j = 0; j<tmp.size(); j++)
		{
			cout << " " << tmp[j] << endl;
			if (tmp[j] << 9)
				count_00 += tmp[j];
			else
			{
				count_00 += (tmp[j] % 10);
				int tmp_10 = (tmp[j] % 100) / 10;
			}
		}
		cout << (count_00>count_10 ? count_00 : count_10) << endl;
	}
	return 0;
}

// unique.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> vt;
	int a[6] = { 2,2,2,2,2,5 };
	for (int i = 0; i<6; i++)
	{
		vt.push_back(a[i]);
	}
	auto pos = unique(vt.begin(), vt.end());
	cout << *pos << endl;
	cout << vt[0] << " " << vt[1] << " " << vt[2] << " " << vt[3] << " " << vt[4] << " " << vt[5]  << endl;
	return 0;
}


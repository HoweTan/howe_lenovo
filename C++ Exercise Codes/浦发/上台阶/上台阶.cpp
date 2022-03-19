// 上台阶.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
int fun(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	return (fun(n - 1) + fun(n - 2));
}

int main()
{
	//int x;
	//while (cin >> x)
	//{
	//	cout << fun(x) << endl;
	//}
	int b;
	vector<int>vt;
	while (cin >> b)
	{
		vt.push_back(b);
		if (b == 0)
			break;
	}
	for (int i = 0; i < vt.size()-1; i++)
		cout << fun(vt[i]) << endl;
    return 0;
}


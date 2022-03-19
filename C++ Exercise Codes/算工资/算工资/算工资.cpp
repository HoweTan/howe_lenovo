// 算工资.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int fun(int n, int a, int b, int c, int f0)
{
	if (n<0)
		return 0;
	if (n == 0)return f0;
	return a*fun(n - 1,a,b,c,f0) + b*fun(n - 2, a, b, c, f0) + c*fun(n - 3, a, b, c, f0) + 2 * n*n - n + 32767;
}
int main()
{
	int n, a, b, c, f0;
	while (cin >> n >> a >> b >> c >> f0)
	{
		int res = fun(n, a, b, c, f0);
		cout << res << endl;
	}
	return 0;
}

// n位与n-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n = 9999;
	int count = 0;
	while (n)
	{
		count++;
		n = n&(n - 1);
	}
	cout << count << endl;
    return 0;
}


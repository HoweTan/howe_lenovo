// 交换数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a[10],p=0;
	int max = INT_MIN;
	int min = INT_MAX;
	int i, j;
	while (p < 10)
	{
		cin >> a[p];
		p++;
	}
	for (int k = 0; k < 10; k++)
	{
		if (max < a[k])
		{
			max = a[k];
			i = k;
		}
		if (min > a[k])
		{
			min = a[k];
			j = k;
		}
	}
	if (i == 0 && j == 9)
		swap(a[0], a[9]);
	else
	{
		swap(a[i], a[9]);
		swap(a[j], a[0]);
	}
	for (int k = 0; k < 10; k++)
		cout << a[k] << " ";
	cout << endl;
    return 0;
}


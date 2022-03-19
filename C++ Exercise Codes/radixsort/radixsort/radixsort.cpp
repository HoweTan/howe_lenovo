// radixsort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<queue>
using namespace std;
void radixsort(const int data[10], int n)
{
	int radix = 10;
	int digits = 10;
	int i, j, k, factor;
	queue<long>queue1[10];
	for (i = 0, factor = 1; i<digits; factor *= radix, i++)
	{
		for (j = 0; j<10; j++)
		{
			queue1[(data[j] / factor) % radix].push(data[j]);
		}
		for (j = k = 0; j<radix; j++)
		{
			while (!queue1[j].empty())
				data[k++] = queue1[j].front();
			queue1[j].pop();
		}
	}

}
int main()
{

	int data[10] = { 10,1234,9,7234,67,9181,733,197,7,3 };
	radixsort(data, 10);
	for (int m = 0; m<10; m++)
		cout << data[m] << " ";
	return 0;
}


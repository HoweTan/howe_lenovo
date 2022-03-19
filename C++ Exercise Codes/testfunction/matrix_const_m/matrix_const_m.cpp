// matrix_const_m.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iomanip>//需要这个头文件
#include<iostream>
using namespace std;
/* c=lamd*b where c[m][n] lamd b[m][n] */
void matrix_const_m(int m, int n, double *c, const double *b, double lamd)
{
	int i, j;
	double temp = 0;
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			temp = 0;
			temp += lamd * (b[n*i + j]);
			c[n*i + j] = temp;
		}
	}
}
int main()
{
	double a[324], b[324], c[324];
	for (int i = 0; i < 324; i++)
	{
		a[i] = 1;
		b[i] = 1;
	}
	matrix_const_m(18, 18, c, b, 4);
	for (int i = 0; i < 324; i++)
	{
		cout << setw(4) << c[i] << " ";
		if ((i + 1) % 18 == 0)
			cout << endl;
	}
    return 0;
}


// testmatrixadd.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iomanip>//需要这个头文件
#include<iostream>
using namespace std;
/* c=a+b where a[m][n] b[m][n] c[m][n] */
void   matrix_add(int m, int n, double *c, const double *b, const double *a)
{
	int i, j;
	//    double ctemp[324];
	//  matrix_t_m(m,n,k,ctemp,b,a); /* a*b' */

	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			c[i*n + j] = a[i*n + j] + b[i*n + j];
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
	matrix_add(18, 18, c, b, a);
	for (int i = 0; i < 324; i++)
	{
		cout<<setw(4) << c[i] << " ";
		if ((i+1) % 18 == 0)
			cout << endl;
	}
    return 0;
}


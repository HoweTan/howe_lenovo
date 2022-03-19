// testfunction.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	double F[50], FF[50];
	for (int i = 0; i < 50; i++)
	{
		F[i] = i;
	}
	memcpy(FF, F, sizeof(F));
	for (int j = 0; j < 50; j++)
	{
		cout << FF[j] << " ";
		if (j % 5 == 0)
			cout << endl;
	}
    return 0;
}


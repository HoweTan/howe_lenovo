// nλ��n-1.cpp : �������̨Ӧ�ó������ڵ㡣
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


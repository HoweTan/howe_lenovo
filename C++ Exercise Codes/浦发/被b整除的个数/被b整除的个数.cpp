// ��b�����ĸ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n, b;
	while (cin >> n >> b)
	{
		int count = 0;
		for (int i = 1; i <= n; i++)
		{
			if (i%b == 0)
				count++;
		}
		cout << count << endl;
	}
    return 0;
}


// ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	for (int i = 1990; i < 2011; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			cout << i << " ";

	}
	cout << endl;
    return 0;
}


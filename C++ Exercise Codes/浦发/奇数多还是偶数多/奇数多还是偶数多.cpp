// �����໹��ż����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string str;
	while (cin >> str)
	{
		int num_even = 0;
		int num_odd = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if ((str[i] - '0') % 2 == 0)
				num_even++;
			else
				num_odd++;
		}
		if (num_even > num_odd)
			cout << "ż����" << endl;
		else if (num_even < num_odd)
			cout << "������" << endl;
		else
			cout << "������ż��һ����" << endl;
	}
    return 0;
}


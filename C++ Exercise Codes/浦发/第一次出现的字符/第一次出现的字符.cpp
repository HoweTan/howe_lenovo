// ��һ�γ��ֵ��ַ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		int count[128] = { 0 };
		for (int i = 0; i < str.size(); i++)
		{
			count[str[i] - ' ']++;
		}
		for (int i = 0; i < str.size(); i++)
		{
			if (count[str[i] - ' '] == 1)
			{
				cout << str[i] << endl;
				break;
			}
		}
	}
    return 0;
}


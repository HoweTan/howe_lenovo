// �滻��ĸi.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	while (getline(cin,str))
	{
		int len = str.size();
		for (int i = 0; i < len; i++)
		{
			if (str[i] == 'i')
				str[i] -= 32;
		}
		cout << str << endl;
	}
    return 0;
}


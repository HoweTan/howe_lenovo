// aAtoC.cpp : �������̨Ӧ�ó������ڵ㡣
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
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == 'a' || str[i] == 'A')
				str[i] = 'c';
		}
		cout << str << endl;
	}
    return 0;
}


// �ж��ַ���ȫ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		int i;
		for ( i = 0; i < str.size(); i++)
		{
			if (!isdigit(str[i])) 
			{
				cout << "false" << endl;
				break;
			}				
		}
		if(i==str.size()&&isdigit(str[i-1]))
			cout << "true" << endl;
		
	}
	return 0;
}


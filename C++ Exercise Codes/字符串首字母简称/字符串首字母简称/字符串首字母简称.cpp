// �ַ�������ĸ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		string res;
		if (str.size() == 0)
			cout << " " << endl;
		else
		{
			res += str[0] - 32;
			for (int i = 1; i < str.size(); i++)
			{
				if (str[i] == ' '&&str[i+1]!=' ')
				{
					res += str[i+1] - 32;
				}
				
			}
			cout << res << endl;
		}		
	}
    return 0;
}


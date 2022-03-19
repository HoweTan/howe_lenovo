// substr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	char *str1 = "aocdfe";
	char *str2 = "pmcdfa";
	char *temp = new char(0);
	bool flag = false;
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j <= 6 - i; j++)
		{
			memcpy(temp, &str1[j], i);
			temp[i] = '\0';
			if (strstr(str2, temp))
			{
				cout << temp << endl;
				flag = true;
				break;
			}
			
		}
		if (flag == true)
			break;
		//cout << endl;
	}
    return 0;
}


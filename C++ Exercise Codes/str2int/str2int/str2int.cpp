// str2int.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int str2int(const char* str)
{
	int num = 0;
	while (*str == ' ' || *str == '0')
	{
		str++;
	}
	const char* temp = str;
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*str != '\0')
	{
		if (*str<'0' || *str>'9')
		{
			break;
		}
		num = num * 10 + (*str - '0');
		str++;
	}
	if (*temp == '-')
		num = -num;
	return num;
}

int main()
{
	int n = 0;
	char p[10] = "";
	while (cin.getline(p, 20))
	{
		//cin.getline(p, 20);
		n = str2int(p);
		cout << n << endl;
	}
    return 0;
}


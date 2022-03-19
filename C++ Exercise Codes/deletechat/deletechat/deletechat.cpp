// deletechat.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
char *deletechar(char *str, char c)
{
	if (str == nullptr)
		return NULL;
	char *p = str;
	char *head = str;
	while (*p)
	{
		if (*p != c)
		{
			*str = *p;
			str++;
		}
		p++;
	}
	*str = '\0';
	return head;
}

int main()
{
	char string[] = "cabcdefcgchci";
	char c;
	cin >> c;
	deletechar(string, c);
	cout << string << endl;
	char b;
	cin >> b;
	deletechar(string, b);
	cout << string << endl;
    return 0;
}


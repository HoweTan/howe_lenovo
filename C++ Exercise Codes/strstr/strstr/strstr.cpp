// strstr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	char *str1 = "aocdfe";
	char *str2 = "cdf";
	char *temp = new char(0);
	temp = strstr(str1, str2);
	cout << temp << endl;
    return 0;
}


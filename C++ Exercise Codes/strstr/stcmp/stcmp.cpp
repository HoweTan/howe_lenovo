// stcmp.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	char str1[4] = "";
	char str2[4] = "";
	cin.getline(str1,5);
	cin.getline(str2,5);
	//cout << str1 << str2;
	if (str1 > str2)
		cout << "true";
	else
		cout << "false";
	//delete str1;
	//delete str2;
    return 0;
}


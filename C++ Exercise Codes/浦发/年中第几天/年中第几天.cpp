// 年中第几天.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
bool luner(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		return true;
	else
		return false;
}

int main()
{
	int luner_year[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int no_luner_year[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int year, month, day;
	while (cin >> year >> month >> day)
	{
		int count = 0;
		for (int i = 0; i < month-1; i++)
			count += no_luner_year[i];
		count += day;
		if (luner(year))
			count++;
		cout << count << endl;
	}
    return 0;
}


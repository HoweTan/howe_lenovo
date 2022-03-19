// Acquire_ms.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"time.h"
#include <windows.h>
#include<iostream>
using namespace std;
int main()
{
	SYSTEMTIME t;
	GetLocalTime(&t);
	cout << t.wYear << "年" << t.wMonth << "月" << t.wDay << "日" //就是毫秒数
	<< t.wHour << ":" << t.wMinute << ":" << t.wSecond << ":" << t.wMilliseconds << endl;

	return 0;
}


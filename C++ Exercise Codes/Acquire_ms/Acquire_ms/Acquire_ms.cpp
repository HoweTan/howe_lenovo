// Acquire_ms.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << t.wYear << "��" << t.wMonth << "��" << t.wDay << "��" //���Ǻ�����
	<< t.wHour << ":" << t.wMinute << ":" << t.wSecond << ":" << t.wMilliseconds << endl;

	return 0;
}


// lastWord.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string s1;
	getline(cin, s1);
	reverse(s1.begin(), s1.end());
	cout << s1 << endl;

	return 0;
}


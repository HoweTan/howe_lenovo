// 迭代器.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>st;
	st.push_back(100);
	st.push_back(300);
	st.push_back(400);
	st.push_back(500);
	vector<int>::iterator itor;
	for (itor = st.begin(); itor != st.end(); itor++)
	{
		if (*itor == 300)
		{
			itor = st.erase(itor);
		}
		if ( *itor == 400)
		{
			itor = st.erase(itor);
		}
	}
	for (itor = st.begin(); itor != st.end(); itor++)
		cout << *itor << " " << endl;;
	system("pause");
	return 0;
}


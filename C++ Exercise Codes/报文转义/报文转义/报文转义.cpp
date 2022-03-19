// 报文转义.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<string>vt;
	string str;
	while (cin >> str)
	{
		vt.push_back(str);
	}
		string res;
		vector<string> tmp;
		//int len = 0;
		//for (int i = 0; i < vt[0].size(); i++)
		//{
		//	len =len*10+( vt[0][i]-'0');
		//}
		
		for (int i = 1; i<vt.size(); i++)
		{
			if (vt[i] =="A")
			{
				/*res += to_string(12);
				res += to_string(34);*/
				tmp.push_back("12");
				tmp.push_back("34");
			}
			else if (vt[i] == "B")
			{
				/*res += "AB";
				res += "CD";*/
				tmp.push_back("AB");
				tmp.push_back("CD");
			}
			else
			{
				tmp.push_back(vt[i]);
			}
				//res += vt[i];			
		}
		cout << tmp.size() + 1 << ' ';
		for (int i = 0; i<tmp.size(); i++)
			cout << tmp[i] << ' ';
		//res = to_string(res.size() + 1) + res;
		/*for (int i = 0; i<res.size(); i++)
			cout << res[i] << ' ';*/
		cout << endl;

	return 0;
}


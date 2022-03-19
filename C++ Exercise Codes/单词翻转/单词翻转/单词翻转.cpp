// 单词翻转.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void  reverse_str(string &str)//必须加取地址符&，否则字符串不会翻转
{
	if (str.size() == 0)return;
	reverse(str.begin(), str.end());
	int len = str.size();
	int start = 0, end = 0, tmp;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			tmp = i;
			end = i - 1;
			reverse(str.begin()+start, str.begin()+end);//两种方式均可以实现反转单词
			/*while (start < end)
			{
				char temp = str[start];
				str[start] = str[end];
				str[end] = temp;
				start++;
				end--;
			}*/
			start = end = tmp + 1;
		}
	}
}
int main()
{
	string str;
	while (getline(cin,str))
	{
		reverse_str(str);
		cout << str << endl;
	}
	return 0;
}

// ���ʷ�ת.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void  reverse_str(string &str)//�����ȡ��ַ��&�������ַ������ᷭת
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
			reverse(str.begin()+start, str.begin()+end);//���ַ�ʽ������ʵ�ַ�ת����
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

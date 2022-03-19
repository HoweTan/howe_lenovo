// ������Ӵ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//�����ַ���str������dp[i,j]=1��ʾstr[i...j]�ǻ����Ӵ���
//�Ǹ��ض�����dp[i+1,j-1]=1������������Ӵ����ֽܷ��һϵ�������⣬�������ö�̬�滮����ˡ�
//�����״̬ת�Ʒ��̱�ʾ����str[i]=str[j]ʱ�����str[i+1...j-1]�ǻ��Ĵ���
//��str[i...j]Ҳ�ǻ��Ĵ������str[i+1...j-1]���ǻ��Ĵ���
//��str[i...j]���ǻ��Ĵ���
//��ʼ״̬

//dp[i][i] = 1
//dp[i][i + 1] = 1 if str[i] == str[i + 1]
//��ʽ�������ǵ����ַ���������ͬ�ַ����ǻ��Ĵ���
string longsubstr(string str)
{
	int n = str.size();
	vector<vector<int> > dp(n, vector<int>(n));
	int maxlen = 1;
	int start = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i - j < 2)
			{
				dp[j][i] = (str[i] == str[j]);
			}
			else
			{
				dp[j][i] = (str[i] == str[j] && dp[j + 1][i - 1]);
			}
			if (dp[j][i] && maxlen < i - j + 1)
			{
				maxlen = i - j + 1;
				start = j;
			}
		}
	}
	return str.substr(start, maxlen);
}

int main()
{
	string str;
	while (getline(cin, str))
	{
		string res = longsubstr(str);
		cout << res << endl;
	}
    return 0;
}


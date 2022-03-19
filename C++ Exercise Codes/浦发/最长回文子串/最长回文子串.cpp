// 最长回文子串.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//对于字符串str，假设dp[i,j]=1表示str[i...j]是回文子串，
//那个必定存在dp[i+1,j-1]=1。这样最长回文子串就能分解成一系列子问题，可以利用动态规划求解了。
//上面的状态转移方程表示，当str[i]=str[j]时，如果str[i+1...j-1]是回文串，
//则str[i...j]也是回文串；如果str[i+1...j-1]不是回文串，
//则str[i...j]不是回文串。
//初始状态

//dp[i][i] = 1
//dp[i][i + 1] = 1 if str[i] == str[i + 1]
//上式的意义是单个字符，两个相同字符都是回文串。
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


// 最长数组子序列.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
using namespace std;
int a[100001], b[100001], map[100001], f[100001];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) { cin>>a[i]; map[a[i]] = i; }
	for (int i = 1; i <= n; i++) { cin>>b[i]; f[i] = 0x7fffffff; }
	int len = 0;
	f[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		int l = 0, r = len, mid;
		if (map[b[i]]>f[len])f[++len] = map[b[i]];
		else
		{
			while (l<r)
			{
				mid = (l + r) / 2;
				if (f[mid]>map[b[i]])r = mid;
				else l = mid + 1;
			}
			f[l] = min(map[b[i]], f[l]);
		}
	}
	cout << n-len<<endl;//改为n-len 则为输出删除的个数
	return 0;
}


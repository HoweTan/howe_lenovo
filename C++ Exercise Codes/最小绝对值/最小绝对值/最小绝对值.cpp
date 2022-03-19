// 最小绝对值.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int>vt;
//	int b;
//	for (int i = 0; i<N; i++)
//	{
//		cin >> b;
//		vt.push_back(b);
//	}
//	vector<int>res;
//	for (int i = 0; i<N - 1; i++)
//	{
//		int p = abs(vt[i] - vt[i + 1]);
//		res.push_back(p);
//	}
//	auto it = min_element(res.begin(), res.end());
//	int k ;
//	for (k = 0; k < N - 1; k++)
//	{
//		if (*it == res[k])
//			break;
//	}
//	
//	cout << vt[k] << " " << vt[k+1]<< endl;
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define INF 0x3f3f3f3f
//int main()
//{
//	int n, k, res;
//	int a[50010], b[50010];
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		b[i] = INF;
//	}
//	res = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		k = lower_bound(b + 1, b + 1 + n, a[i]) - b;
//		b[k] = a[i];
//		res = max(res, k);
//	}
//	cout << res << endl;
//	return 0;
//}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, b;
	cin >> n;
	vector<int>vt;
	for (int i = 0; i<n; i++)
	{
		cin >> b;
		vt.push_back(b);
	}
	//sort(vt.begin(), vt.end());
	//int count = 0;
	//for (int i = 0; i<n - 1; i++)
	//{
	//	for (int j = i + 1; j<n; j++)
	//	{
	//		if (vt[i] >= (float)0.9*vt[j])
	//			count++;
	//		else
	//			break;
	//	}
	long count = 0;
	for (int i = 0; i<n - 1; i++)
	{
		for (int j = n - 2; j >= 1; j--)
		{
			if (a[j]>a[j + 1])
				swap(a[j], a[j + 1]);
			if (a[j] > float(0.9*a[j + 1]))
				count++;
		}
	}
	cout << count << endl;
	return 0;
}
// max.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long maxyushu(long long a, long long b)
{
	if (b == 0)
		return a;
	else
		return maxyushu(b, a%b);
}
int main()
{
	long long a, b;
	cin >> a;
	cin >> b;
	long long res = maxyushu(a, b);
	cout << res << endl;
	return 0;
}
//int main()
//{
//	long long n;
//	cin >> n;
//	long long b;
//	vector<long long>tmp;
//	vector<long long>res;
//	for (long long i = 0; i<n; i++)
//	{
//		cin >> b;
//		tmp.push_back(b);
//	}
//	vector<long long>::iterator it = tmp.begin();
//	long long maxval;
//	for (long long i = 1; i <= n; i++)
//	{
//		maxval = *max_element(it, it + i);
//		res.push_back(maxval);
//	}
//	for (long long i = 0; i<n; i++)
//		cout << res[i] << " ";
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int b;
//	vector<int>tmp;
//	vector<int>res;
//	for (int i = 0; i<n; i++)
//	{
//		cin >> b;
//		tmp.push_back(b);
//	}
//	vector<int>::iterator it = tmp.begin();
//	int maxval;
//	for (int i = 1; i<=n; i++)
//	{
//		maxval = *max_element(it, it + i);
//		res.push_back(maxval);
//	}
//	for (int i = 0; i<n; i++)
//		cout << res[i] << " ";
//	return 0;
//}

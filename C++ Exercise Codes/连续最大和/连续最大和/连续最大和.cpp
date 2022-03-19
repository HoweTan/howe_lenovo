// 连续最大和.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include <numeric>
#include<iterator>
using namespace std;
int main()
{
	int maxsum = 0;
	int N, x;
	cin >> N;
	vector<int> v1;
	for (int i = 0; i<N; i++)
	{
		cin >> x;
		v1.push_back(x);
	}
	vector<int>::iterator it = v1.begin();
	for (int i = 0; i<N; i++)
	{
		vector<int> v2;
		partial_sum(it + i, it + N, back_inserter(v2));
		auto res1 = max_element(v2.begin(), v2.end());
		if (maxsum<*res1)
			maxsum = *res1;
	}
	cout << maxsum << endl;
	return 0;
}


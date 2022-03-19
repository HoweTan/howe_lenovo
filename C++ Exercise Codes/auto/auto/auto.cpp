// auto.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>prices;
	prices.push_back(5);
	prices.push_back(6);
	prices.push_back(1);
	prices.push_back(2);
	prices.push_back(4);
	auto minprices = min_element(prices.begin(), prices.end());
	auto maxprices = max_element(minprices, prices.end());
	int res = *maxprices - *minprices;
	cout << res << endl;
	cout << *minprices << endl;
	cout << *maxprices << endl;
	return 0;
}


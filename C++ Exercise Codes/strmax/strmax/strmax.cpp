// strmax.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string &a, string &b) {
	return (a + b) > (b + a);
}
int main() {
	int n;
	cin >> n;
	vector<string> str(n, "");
	for (int i = 0; i<n; i++) {
		cin >> str[i];
	}
	//sort(str.begin(), str.end(), compare);
	sort(str.begin(), str.end());
	string res;
	for(auto it=str.rbegin();it!=str.rend();it++)
	{
		res += *it;
	}
	//for (auto c : str) {
	//	res += c;
	//}
	if (res[0] == '0')
		cout << 0 << endl;
	else
		cout << res << endl;
	return 0;
}


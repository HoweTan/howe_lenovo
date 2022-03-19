// 大数相减.cpp : 定义控制台应用程序的入口点。////两个大数相减（整数，包含正负数）
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
void get_max1(string &str1, string &str2, int &sign)
{
	string str;
	if ((str1.size() < str2.size()))
	{
		sign = -1;
		string temp = str1;
		str1 = str2;
		str2 = temp;
	}
	else if ((str1.size() == str2.size()) && str1.compare(str2) < 0)
	{
		sign = -1;
		string temp = str1;
		str1 = str2;
		str2 = temp;
	}
	
}
void get_max2(string &str1, string &str2, int &sign){
	string str;
	if ((str1.size() < str2.size()))
	{
		string temp = str1;
		str1 = str2;
		str2 = temp;
	}
	else if ((str1.size() == str2.size()) && str1.compare(str2) < 0)
	{
		//sign = -1;
		string temp = str1;
		str1 = str2;
		str2 = temp;
	}
	else
		sign = -1;

}

string borrow_one(string str1, string str2){
	int tempint;
	string str;
	tempint = str1.size() - str2.size();
	for (int i = str2.size() - 1; i >= 0; i--)
	{
		if (str1[i + tempint] < str2[i])          //借位
		{
			int j = 1;
			while (1)
			{
				if (str1[tempint - j + i] == '0')
				{
					str1[i + tempint - j] = '9';
					j++;
				}
				else
				{
					str1[i + tempint - j] = str1[i + tempint - j] - 1;
					break;
				}
			}
			str = char(str1[i + tempint] - str2[i] + ':') + str;//这里‘:’代表10
		}
		else
			str = char(str1[i + tempint] - str2[i] + '0') + str;
	}
	for (int i = tempint - 1; i >= 0; i--)
		str = str1[i] + str;
	return str;
}

string count_int(string s1, string s2) {
	string res;
	int carry = 0, i = s1.size() - 1, j = s2.size() - 1;
	while (i >= 0 || j >= 0 || carry != 0)
	{
		if (i >= 0) carry += s1[i--] - '0';
		if (j >= 0) carry += s2[j--] - '0';
		res += to_string(carry % 10);
		carry /= 10;
	}
	reverse(res.begin(), res.end());
	return res;
}
string sub_int(string str1, string str2)  //高精度减法
{
	int sign = 1; //sign为符号位
	string str;

	if (str1[0] != '-' && str2[0] == '-')
	{
		str = count_int(str1, str2.erase(0, 1));
	}
	else if (str1[0] == '-' && str2[0] != '-'){
		str = count_int(str1.erase(0, 1), str2);
		sign = -1;
	}
	/*两个数都是负数，有问题*/
	else if (str1[0] == '-' && str2[0] == '-'){
		str1 = str1.erase(0, 1);
		str2 = str2.erase(0, 1);
		if (str1.compare(str2) == 0)
			return "0";
		else
			get_max2(str1, str2, sign);
		str = borrow_one(str1, str2);	
	}
	else
	{
		if (str1.compare(str2) == 0)
			return "0";
		else
			get_max1(str1, str2, sign);
		str = borrow_one(str1, str2);		
	}	
	//去出结果中多余的前导0
	str.erase(0, str.find_first_not_of('0'));
	if (str.empty())str = "0";
	if ((sign == -1) && (str[0] != '0'))str = "-" + str;
	
	return str;
}
int main(){
	string s1, s2, s3;
	while (cin >> s1 >> s2)
	{
		s3 = sub_int(s1, s2);
		cout << s3 << endl;
	}	
	return 0;
}
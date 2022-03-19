// 浮点大数相加.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//判断是否有小数点；
bool has_dot(string str)
{
	for (int i = 0; i<str.size(); i++)
	{
		if (str[i] == '.')
			return true;
	}
	return false;
}

//获取小数点的位置
int get_dot_pos(string str)
{
	for (int i=0;i<str.size();i++)
	{
		if (str[i] == '.')
			return i;
	}
}

//删除小数点后面的尾数0
string del_tail_zero(string str)
{
	while (*(str.end() - 1) == '0')
		str.erase(str.end() - 1);
	if (*(str.end()-1)=='.')
		str.erase(str.end() - 1);
	return str;
}
string add(string a, string b)
{
	string sum;
	int carry = 0, i = a.size() - 1, j = b.size() - 1;
	while (i >= 0 || j >= 0 || carry != 0)
	{
		if (i >= 0) carry += a[i--] - '0';
		if (j >= 0) carry += b[j--] - '0';
		sum += to_string(carry % 10);
		carry /= 10;
	}
	reverse(sum.begin(), sum.end());
	return sum;
}
string add_dotstring(string a, string b)
{
	if (a.size() < b.size())
	{
		string tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = b.size() - 1; i >= 0; i--)
	{
		a[i] += b[i] - '0';
		if (a[i] > '9')
		{
			if (i > 0)
			{
				a[i - 1]++;
				a[i] -= 10;
			}
			else
			{
				a[i] -= 10;
				a = "1" + a;
			}		
		}
	}
	return a;
}
string get_sum(string a, string b)
{
	bool a_has_dot = has_dot(a), b_has_dot = has_dot(b);
	if (a_has_dot && !b_has_dot)
		b.append(".0");
	else if (!a_has_dot && b_has_dot)
		a.append(".0");
	else if (!a_has_dot && !b_has_dot)
	{
		a.append(".0");
		b.append(".0");
	}
	int a_dot_pos = get_dot_pos(a), b_dot_pos = get_dot_pos(b); // 小数点位置
	string a_int = a.substr(0, a_dot_pos), b_int = b.substr(0, b_dot_pos); // 获取整数部分
	string a_float = a.substr(a_dot_pos + 1, a.length() - a_dot_pos - 1), b_float = b.substr(b_dot_pos + 1, b.length() - b_dot_pos - 1); // 获取小数部分

	string float_ans = add_dotstring(a_float, b_float);//小数部分和
	string int_ans = add(a_int, b_int);//整数部分和

	if (float_ans.length() > max(a_float.length(), b_float.length())) 
	{
		int_ans = add(int_ans, "1");
		float_ans.erase(float_ans.begin());
	}
	string ans = "";
	ans.append(int_ans);
	ans.append(".");
	ans.append(float_ans);
	return del_tail_zero(ans);
}
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		cout << get_sum(a, b) << endl;
	}
    return 0;
}
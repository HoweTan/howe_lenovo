#include<iostream>
#include<string>
using namespace std;
int strToint(string str)
{
	if (str.size() == 0)return;
	char temp = str[0];
	int len = str.size();
	int i = 0;
	int res=0;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while (i < len)
	{
		if (str[i]<'0' || str[i]>'9')
			break;
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (temp == '-')
		res = -res;
	return res;
}
int main()
{
	string str;
	while (cin >> str)
	{
		int res = strToint(str);
		cout << res << endl;
	}
	return 0;
}
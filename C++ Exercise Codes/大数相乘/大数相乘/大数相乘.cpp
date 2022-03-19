// �������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		int sign = 1;
		if (a[0] == '-'&&b[0] != '-')
		{
			a.erase(0, 1);
			sign = -1;
		}
		else if (a[0] != '-'&&b[0] == '-')
		{
			b.erase(0, 1);
			sign = -1;
		}
		else if (a[0] == '-'&&b[0] == '-')
		{
			a.erase(0, 1);
			b.erase(0, 1);
		}
		if ((a[0] - '0') == 0 || (b[0] - '0') == 0)
			cout << 0 << endl;
		else
		{
			int n1 = a.size() - 1, n2 = b.size() - 1;
			vector<int>mul(n1 + n2 + 2);

			for (int i = n1; i >= 0; i--)
			{
				for (int j = n2; j >= 0; j--)
				{
					int temp = (a[i] - '0')*(b[j] - '0');
					temp += mul[i + j + 1];//����ǰ�汣��ĵ�λ�Ľ�λ

					mul[i + j] += temp / 10;//���ĸ�λ
					mul[i + j + 1] = temp % 10;//���ĵ�λ
				}
			}
			int i = 0;//ȥ����ǰ���0��
			while (i < n1 + n2 + 1 && mul[i] == 0)
				i++;
			string res;
			if (sign == -1)
				res += '-';
			for (; i < n1 + n2 + 2; i++)
				res+=(to_string(mul[i]));
			cout << res << endl;
		}
	}
    return 0;
}


// tailandhead.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
# include <iostream>
#include<algorithm>
using namespace std;
#define MAXN 110
int N;
int data1[MAXN];///��ų�ʼֵ
int sum[MAXN];///���ǰi�����ĺ�
int gain[MAXN][MAXN];///������[i,j]ȡ�������ֵ
int main()
{
	while (cin >> N)
	{
		memset(sum, 0, sizeof(sum));
		for (int i = 1; i <= N; i++)
		{
			cin >> data1[i];
			sum[i] = sum[i - 1] + data1[i];
			gain[i][i] = data1[i];///��ʼ��
		}
		for (int i = N - 1; i>0; i--)///��̬�滮����С������չ��������
		{
			for (int j = i; j <= N; j++)
			{
				gain[i][j] = sum[j] - sum[i - 1] - min(gain[i + 1][j], gain[i][j - 1]);
				///sum[j]-sum[i-1]����[i,j]�����������ĺ�
				///��ǰ�˴�[i,j]����ȡ������ô��һ����ֻ�ܴ�[i+1,j]����
				///[i,j-1]����ȡ��
			}
		}
		cout << gain[1][N] << ' ' << sum[N] - gain[1][N] << endl;
	}
	return 0;
}



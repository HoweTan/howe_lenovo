// Heapsort.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Heapsort
{
public:
	void swap(int arr[], int a, int b);		//����Ԫ�أ�
	void adjustHeap(int arr[], int i, int length);		//�����󶥶ѣ����ǵ������̣������ڴ󶥶��ѹ����Ļ����ϣ�
	void heapsort(int arr[], int length);
	void print(int arr[], int length);
};
	void Heapsort:: swap(int arr[], int a, int b)		//����Ԫ�أ�
	{
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	void Heapsort::adjustHeap(int arr[], int i, int length)		//�����󶥶ѣ����ǵ������̣������ڴ󶥶��ѹ����Ļ����ϣ�
	{
		int temp = arr[i];//��ȡ����ǰԪ��i
		for (int k = i * 2 + 1; k<length; k = k * 2 + 1)//��i�������ӽ�㿪ʼ��Ҳ����2i+1����ʼ
		{
			if (k + 1<length&&arr[k]<arr[k + 1])//������ӽ��С�����ӽ�㣬kָ�����ӽ��
			{
				k++;
			}
			if (arr[k] >temp)//����ӽڵ���ڸ��ڵ㣬���ӽڵ�ֵ�������ڵ㣨���ý��н�����
			{
				arr[i] = arr[k];
				i = k;
			}
			else
			{
				break;
			}
		}
		arr[i] = temp;//��tempֵ�ŵ����յ�λ��
	}
	void Heapsort::heapsort(int arr[], int length)
	{
		//1.�����󶥶�
		for (int i = length / 2 - 1; i >= 0; i--)
		{
			//�ӵ�һ����Ҷ�ӽ��������ϣ�������������ṹ
			adjustHeap(arr, i, length);
		}
		for (int j = length - 1; j>0; j--)
		{
			swap(arr, 0, j);//���Ѷ�Ԫ����ĩβԪ�ؽ��н���
			adjustHeap(arr, 0, j);//���¶Զѽ��е���
		}
	}
	void Heapsort::print(int arr[], int length)
	{
		for (int i = 0; i < length; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

int main()
{
		int arr[9] = { 9,8,7,6,10,4,3,2,1 };
		Heapsort sort;
		sort.heapsort(arr, 9);
		sort.print(arr,9);
		return 0;
}
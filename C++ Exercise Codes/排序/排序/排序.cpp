// 排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void bubblesort(vector<int>&vt)
{
	for (int i = 0; i < vt.size() - 1; i++)
	{
		for (int j = vt.size() - 1; j > i; j--)
		{
			if (vt[j] < vt[j - 1])
				swap(vt[j], vt[j - 1]);
		}
	}
}
void insertsort(vector<int>&vt)
{
	for (int i = 1; i < vt.size(); i++)
	{
		int temp = vt[i];
		int j;
		for (j = i; j > 0 && temp < vt[j - 1]; j--)
		{
			vt[j] = vt[j - 1];
		}
		vt[j] = temp;
	}
}
void selectsort(vector<int>&vt)
{
	for (int i = 0; i < vt.size()-1; i++)
	{
		int least,j;
		for (j = i + 1, least = i; j < vt.size(); j++)
		{
			if (vt[least] > vt[j])
				least = j;
		}
		swap(vt[i], vt[least]);
	}
}
void shellsort(vector<int>&vt)
{
	for (int gap=vt.size()/2; gap>0;gap/=2 )
	{	
		for (int i = gap; i < vt.size(); i++)
		{
			int temp = vt[i];
			int j;
			for (j = i; j > 0 && temp < vt[j - 1]; j--)
			{
				vt[j] = vt[j - 1];
			}
			vt[j] = temp;
		}
	}
}
void quicksort(vector<int>&vt, int low, int high)
{
	if (low < high)
	{
		int i = low;
		int j = high;
		int temp = vt[low];
		while (i < j)
		{
			while (i < j&&temp < vt[j])
				j--;
			if (i < j)
				vt[i++] = vt[j];
			while (i<j&&temp>vt[i])
				i++;
			if (i < j)
				vt[j--] = vt[i];
		}
		vt[i] = temp;
		quicksort(vt, low, i - 1);
		quicksort(vt, i + 1, high);
	}
}
void merge(vector<int>&vt, int low, int high)
{
	int *p = new int[high + 1];
	int mid = low + (high - low) / 2;
	int i = 0, i1 = low, i2 = mid + 1;
	while (i1 <= mid&&i2 <= high)
	{
		if (vt[i1] < vt[i2])
			p[i++] = vt[i1++];
		else
			p[i++] = vt[i2++];
	}
	while (i1 <= mid)
		p[i++] = vt[i1++];
	while (i2 <= high)
		p[i++] = vt[i2++];
	i = 0;
	while (low <= high)
	{
		vt[low++] = p[i++];
	}
	delete [] p;
}
void mergesort(vector<int>&vt, int low, int high)
{
	if (low < high)
	{
		int mid = low + (high - low) / 2;
		mergesort(vt, low, mid);
		mergesort(vt, mid + 1, high);
		merge(vt, low, high);
	}
}
void adjustheap(vector<int>&vt, int i, int len)
{
	int temp = vt[i];
	for (int k = 2 * i + 1; k < len; k = k * 2 + 1)
	{
		if (k + 1 < len&&vt[k] < vt[k + 1])
		{
			k++;
		}
		if (vt[k] > temp)
		{
			vt[i] = vt[k];
			i = k;
		}
		else
			break;
	}
	vt[i] = temp;
}
void heapsort(vector<int>&vt, int len)
{
	for (int i = len / 2 - 1; i >= 0; i--)
	{
		adjustheap(vt, i, len);
	}
	for (int j = len - 1; j > 0; j--)
	{
		swap(vt[0], vt[j]);
		adjustheap(vt, 0, j);
	}
}
int main()
{
	vector<int>vt;
	int b;
	while (cin >> b)
	{
		vt.push_back(b);
		if (cin.get() == '\n')
			break;
	}
	//bubblesort(vt);
	//insertsort(vt);
	//selectsort(vt);
	//shellsort(vt);
	//quicksort(vt, 0, vt.size() - 1);
	//mergesort(vt, 0, vt.size() - 1);
	heapsort(vt,vt.size());
	for (int i = 0; i < vt.size(); i++)
		cout << vt[i] << " ";
	cout << endl;
    return 0;
}


// Heapsort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Heapsort
{
public:
	void swap(int arr[], int a, int b);		//交换元素；
	void adjustHeap(int arr[], int i, int length);		//调整大顶堆（仅是调整过程，建立在大顶堆已构建的基础上）
	void heapsort(int arr[], int length);
	void print(int arr[], int length);
};
	void Heapsort:: swap(int arr[], int a, int b)		//交换元素；
	{
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	void Heapsort::adjustHeap(int arr[], int i, int length)		//调整大顶堆（仅是调整过程，建立在大顶堆已构建的基础上）
	{
		int temp = arr[i];//先取出当前元素i
		for (int k = i * 2 + 1; k<length; k = k * 2 + 1)//从i结点的左子结点开始，也就是2i+1处开始
		{
			if (k + 1<length&&arr[k]<arr[k + 1])//如果左子结点小于右子结点，k指向右子结点
			{
				k++;
			}
			if (arr[k] >temp)//如果子节点大于父节点，将子节点值赋给父节点（不用进行交换）
			{
				arr[i] = arr[k];
				i = k;
			}
			else
			{
				break;
			}
		}
		arr[i] = temp;//将temp值放到最终的位置
	}
	void Heapsort::heapsort(int arr[], int length)
	{
		//1.构建大顶堆
		for (int i = length / 2 - 1; i >= 0; i--)
		{
			//从第一个非叶子结点从下至上，从右至左调整结构
			adjustHeap(arr, i, length);
		}
		for (int j = length - 1; j>0; j--)
		{
			swap(arr, 0, j);//将堆顶元素与末尾元素进行交换
			adjustHeap(arr, 0, j);//重新对堆进行调整
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
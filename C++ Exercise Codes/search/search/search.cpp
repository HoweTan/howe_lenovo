// search.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int binarysearch(int arr[], int value, int begin, int end)
{
	int mid = (end +begin) >> 1;
	if (arr[mid] == value)
		return mid;
	else if (arr[mid] < value)
		return binarysearch(arr, value, mid + 1, end);
	else if (arr[mid] > value)
		return binarysearch(arr, value, begin, mid - 1);
}


int main()
{
    
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int res = binarysearch(arr, 5, 0, 9);
	cout << res<<endl;
	return 0;
}


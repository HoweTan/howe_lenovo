// str_sort_swap.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
template<class T>
void myswap(T &a,T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
void mysort(char *str, int length)
{
	int temp = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length-i-1; j++)
		{
			if (str[j+1] < str[j])
			{
				swap(str[j + 1], str[j]);
				/*temp = str[j + 1];
				str[j + 1] = str[j];
				str[j] = temp;*/
			}
		}
	}
}
void myswap1(char *str, int mid, int len)
{
	int i = 0;
	int j = len - mid;
	while (j < len)
	{
		//char temp;
		//temp = str[j];
		//str[j] = str[i];
		//str[i] = temp;
		myswap(str[i], str[j]);
		i++;
		j++;
	}
}
char* foo(char *str)
{
	int len = 0;
	char* start = NULL;
	if (str == NULL)
		return NULL;
	start = str;
	while (*str++);
	len = str - start - 1;
	int mid = len / 2;
	str = start;
	mysort(str, mid);
	myswap1(str, mid, len);
	return str;

}


int main()
{
	char string1[] = "ADZDDJKJFIEJHGI";
	cout << string1 << endl;
	foo(string1);
	cout << string1 << endl;
    return 0;
}


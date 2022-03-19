// Mystring类重载+=.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
char *m_strcpy(char *dest, const char*src)
{
	if ((dest == NULL) || (src == NULL))return NULL;
	char *temp = dest;
	while ((*dest++ = *src++) != '\0');
	return temp;
}
char* m_strcat(char* dest, const char* src)
{
	char *temp = dest;
	while (*dest++);
	dest--;
	while ((*dest++ = *src++)!='\0');
	return temp;
}
int getlen(const char* str)
{
	int len = 0;
	while (*str++ != '\0')
	{
		len++;
	}
	return len;
}
class Mystring
{
private:
	char *str;
public:
	Mystring(const char* s);
	Mystring& operator =(const Mystring &string);
	Mystring& operator +(const Mystring &string);
	~Mystring();
	void print();
};
Mystring::~Mystring()
{
	if (str == NULL)
	{
		delete[] str;
		str = NULL;
	}
}
Mystring::Mystring(const char *s)
{
	if (s == NULL)
	{
		str = new char[getlen(s) + 1];
		str = '\0';
	}
	else
	{
		str = new char[getlen(s) + 1];
		m_strcpy(str, s);
	}
}
Mystring& Mystring::operator=(const Mystring &string)
{
	if (this == &string)
	{
		return *this;
	}
	if (str != NULL)
	{
		delete[] str;
	}	
	str = new char[getlen(string.str) + 1];
	m_strcpy(str, string.str);
	return *this;
}
Mystring& Mystring:: operator +(const Mystring &string)
{
	char *temp = str;
	str = new char[getlen(string.str)+getlen(temp) + 1];
	m_strcpy(str, temp);
	delete[] temp;
	m_strcat(str, string.str);
	return *this;
}
void Mystring::print()
{
	cout << str << endl;
}
int main()
{
	Mystring a("hello ");
	Mystring b("world");
	Mystring c("");
	c = c + a;
	c.print();
	c = c + b;
	c.print();
	c = a + b;
	a.print();
	c.print();
    return 0;
}


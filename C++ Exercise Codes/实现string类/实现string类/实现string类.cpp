
#include "stdafx.h"
#include<iostream>
using namespace std;
char * m_strcpy(char* dest, const char*src)
{
	if ((dest == NULL) || (src == NULL))
		return NULL;
	char *destcopy = dest;
	while ((*dest++ = *src++) != '\0');
	return destcopy;
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
class String
{
public:
	String(const char *str);
	String(const String &other);
	String &operator = (const String &other);
	~String();
private:
	char *m_string;

};
String::~String() 
{
	cout << "deconstructing " << endl;
	if (m_string == NULL)
	{
		delete[] m_string;
		m_string = NULL;
	}
}
String::String(const char* str)
{
	cout << "constructing " << endl;
	if (str == NULL)
	{
		m_string = new char[1];
		m_string = '\0';
	}
	else
	{
		m_string = new char[strlen(str) + 1];
		m_strcpy(m_string, str);
	}
}
String::String(const String &other)
{
	cout << "constructing copy" << endl;
	m_string = new char[strlen(other.m_string) + 1];
	m_strcpy(m_string, other.m_string);
}
String &String::operator=(const String& other)
{
	cout << "operator = function" << endl;
	if (this == NULL)
	{
		return *this;
	}
	delete[] m_string;
	m_string = new char[strlen(other.m_string) + 1];
	m_strcpy(m_string, other.m_string);
	return *this;
}

int main()
{
	cout << getlen("hello") << endl;
	String a("hello");
	String b("world");
	String c(a);
	c = b;
    return 0;
}
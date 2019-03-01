#include <iostream>	
using namespace std;
#include <cstring>
#include "MyString.h"

void deepCopystr(char * &dString, char * otherString);

MyString::MyString()
{
	str = nullptr;
}

MyString::MyString(const char* s)
{
	size_t strSize = strlen(s) + 1;
	str = new char[strSize];
	strcpy_s(str, strSize, s);
}

MyString::MyString(const MyString &other)
{
	deepCopystr(str, other.str);
}

MyString::~MyString()
{
	delete[] str;
}

MyString MyString::operator=(const MyString &other)
{
	if (this != &other)
	{
		delete[] str;
		deepCopystr(str, other.str);
	}

	return *this;
}

MyString MyString::operator+(const MyString &other)
{
	size_t size = strlen(str) + strlen(other.str) + 2;

	char *strcopy;
	strcopy = new char[size];
	strcpy_s(strcopy, size, str);
	strcat_s(strcopy, size, " ");
	strcat_s(strcopy, size, other.str);

	return strcopy;
}

bool MyString::operator==(const MyString &other)
{
	bool isEqual = false;
	if (strcmp(str, other.str) == 0)
	{
		isEqual = true;
	}
	return isEqual;
}

char* MyString::c_str() const
{
	return str;
}

ostream &operator << (ostream &strm, const MyString &s)
{
	strm << s.c_str();
	return strm;
}

void deepCopystr(char * &dString, char * other)
{
	size_t size = strlen(other) + 1;
	dString = new char[size];
	strcpy_s(dString, size, other);
}


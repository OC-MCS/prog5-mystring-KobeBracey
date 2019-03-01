#pragma once
class MyString
{
private:
	char * str; //pointer
public:
	MyString(); //default constructor
	MyString(const char* s); //constructor that copies the string
	~MyString(); //destructor 	
	MyString(const MyString &other); //copy constructor
	MyString operator=(const MyString &other);	//assignment operator
	MyString operator+(const MyString &other);	//+operator
	bool operator==(const MyString &other);	//==operator
	char* c_str() const; // getter function to return char*
};

ostream &operator << (ostream &strm, const MyString &s); //operator
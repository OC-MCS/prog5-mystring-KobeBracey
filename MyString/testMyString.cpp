
#include <iostream>	
using namespace std;
#include <cstring>
#include "MyString.h"
int  main()
{
	MyString s1;
	MyString s2("billy");
	MyString s3(s2);
	char a[] = "hello";
	MyString s4(a);

	s1 = s2;
	s1 = s2 = s3;
	s1 = s1;
	s1 = "jimmy";

	cout << "Before assignment: " << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	s1 = s2;
	cout << "After assignment: " << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;

	return 0;
}
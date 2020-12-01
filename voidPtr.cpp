// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int nValue;
	float fValue;

	struct Something
	{
		int n;
		float f;
	};

	Something sValue;

	void *ptr; //a void pointer
	ptr = &nValue; //void pointer points to int variable
	ptr = &fValue; //void pointer points to float variable
	ptr = &sValue; //void pointer points to struct
	int value = 10;//another int variable
	
	void *voiPtr = &value;//void pointer point to nValue
	int *intPtr = static_cast<int*>(voiPtr);
	char str[] = "example";
	void *voidPtr2 = &str;
	cout << intPtr << endl;
	cout << *intPtr << endl;
	int *addr = static_cast<int*>(voidPtr2);
	cout << addr << endl;
	char *charPtr = static_cast<char*>(voidPtr2);
	cout << charPtr << endl;
	cout << &charPtr << endl;
	cin.get();
    return 0;
}


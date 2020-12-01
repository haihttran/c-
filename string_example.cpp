#include <iostream>
#include <stdio.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: "<<str<<endl;
	std::getchar();
    return 0;
}

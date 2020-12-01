#include <iostream>
#include <stdio.h>

using std::cout;
using std::endl;

int main(){
	cout << "Count from 1 to 1,000,0000" << endl;
	for (long int i=1; i <1000000 ; i++){
		cout << i << endl;
	}
	
	return 0;
}
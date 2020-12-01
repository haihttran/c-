#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using std::cin; 
using std::cout;
using std::endl;
using std::setw;

int main(){
	//counts for die rolls
	 unsigned int f1{0};
	 unsigned int f2{0};
	 unsigned int f3{0};
	 unsigned int f4{0};
	 unsigned int f5{0};
	 unsigned int f6{0};
	 
	 int face; //store roll of die
	 
	 for(unsigned int roll{1}; roll <= 60'000'000; ++roll){
		srand(time(NULL));
		face = 1 + rand() % 6;
		switch(face){
			case 1:
				++f1;
				break;
			case 2:
				++f2;
				break;
			case 3:
				++f3;
				break;
			case 4:
				++f4;
				break;
			case 5:
				++f5;
				break;
			case 6:
				++f6;
				break;
			default:
			cout<<"This is a bug!!";
		}
	 }
	 
	 cout << "Face" << setw(13) << "Freq" << endl;
	 cout << " 1" << setw(16) << f1
			<< "\n 2" << setw(16) << f2
			<< "\n 3" << setw(16) << f3
			<< "\n 4" << setw(16) << f4
			<< "\n 5" << setw(16) << f5
			<< "\n 6" << setw(16) << f6 << endl;
	return 0;
}
#include <iostream>

class Rectangle {
 int width, height;
 public:
	Rectangle(int, int);
	int get_area(){return width*height;}

};

Rectangle::Rectangle(int x, int y){
	width = x;
	height = y;
}

int main(){
	
	Rectangle array[5] = {Rectangle(3, 4), Rectangle(5, 6), Rectangle(7, 8),
							Rectangle(1, 9), Rectangle(11, 2)};
	
	Rectangle * p;
	p = &array[0];
	
	for (int i=0; i < 5; i++){
		std::cout << (*(p+i)).get_area() << std::endl;
	}
	
	return 0;
}
#include <iostream>
using namespace std;

class Rectangle{
	private:
		float width, height;
	public:
		Rectangle(float w, float h);
		float getArea(); 
};

Rectangle::Rectangle(float w,float h){
	width = w;
	height = h;
};

float Rectangle::getArea() {
	return width * height;
};

int main(){
	Rectangle rec(12,20);
	cout << "该矩形面积为：" << rec.getArea() << endl;
};

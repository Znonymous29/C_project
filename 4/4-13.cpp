#include <iostream>
using namespace std;

const double PI = 3.1415;
class circle {
	private:
		double radius;
	public:
		circle(double r){
			radius = r;
		};
		double getArea(){
			return PI*radius*radius;
		};
};

int main(){
	circle cir(3.1);
	cout << "圆的面积为" << cir.getArea() << endl; 
	return 0;
}

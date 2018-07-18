#include<iostream>
using namespace std;

class Point{
	public:
		Point(){
		};
		Point(float x,float y){
			this->x = x;
			this->y = y;
		};
		void display() const{
			cout << "x:" <<x<<",y:"<<y<<endl;
		}; 
		friend Point operator+(const Point &p1,const Point &p2) {
			return Point(p1.x+p2.x,p1.y+p2.y);
		}
	private:
		float x,y;
};

int main(){
	Point p1(3,4),p2(4,5),p3;
	p1.display();
	p2.display();
	p3=p1+p2;
	p3.display();
	return 0;
}

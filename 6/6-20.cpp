#include <iostream>
using namespace std;

class SimpleCircle{
	public:
		SimpleCircle();
		SimpleCircle(int);
		SimpleCircle(const SimpleCircle&);
		~SimpleCircle(){};
		void SetRadius(int);
		int GetRadius()const;
	private:
		int *itsRadius;
		
}; 

SimpleCircle::SimpleCircle(){
	itsRadius = new int(3);
};

SimpleCircle::SimpleCircle(int radius){
	itsRadius = new int(radius);
};

SimpleCircle::SimpleCircle(const SimpleCircle &r){
	int val = r.GetRadius();
	itsRadius = new int(val);
};

int SimpleCircle::GetRadius() const {
	return *itsRadius;
};

int main(){
	SimpleCircle circle1,circle2(5),circle3(circle2);
	cout << "circle1µÄ°ë¾¶£º" << circle1.GetRadius() << endl;
	cout << "circle2µÄ°ë¾¶£º" << circle2.GetRadius() << endl;
	cout << "circle3µÄ°ë¾¶£º" << circle3.GetRadius() << endl;
	return 0;
}

#include <iostream>
using namespace std;

class Complex {
	private:
		float num;
		float dec;
	public:
		Complex(float n = 0,float d = 0);
		void add(Complex &c);
		void show();
};

Complex::Complex(float n, float d) {
	num = n;
	dec = d;
};

void Complex::add(Complex &c) {
	num += c.num;
	dec += c.dec;
};

void Complex::show(){
	cout << num << (dec>0 ? '+' : ' ') << dec << 'i' << endl;
};

int main(){
	Complex c1(3,5);
	Complex c2=4.5;
	c1.add(c2);
	c1.show();
	return 0;
};


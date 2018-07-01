#include<iostream>
using namespace std;

class X;

class Y {
	public:
		void g(X*);
};

class X {
	private:
		int i;
	public:
		X(){i=0;}
		friend void h(X*);
		friend void Y::g(X*);
		friend class Z;
};

void h(X* x){
	x->i+=10;
}

void Y::g(X* x){
	x->i++;
}

class Z {
	public:
		void f(X* x){x->i+=5;};
};



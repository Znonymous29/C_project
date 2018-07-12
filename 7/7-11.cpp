#include<iostream> 
using namespace std;

class BaseClass{
	public:
		BaseClass(){
		};
		void fn1(){
			cout<<"BaseClass::fn1() is called."<<endl;
		};
		void fn2(){
			cout<<"BaseClass::fn2() is called."<<endl;
		};
};

class DerivedClass:public BaseClass{
	public:
		DerivedClass(){
		};
		void fn1(){
			cout<<"DerivedClass::fn1() is called."<<endl;
		};
		void fn2(){
			cout<<"DerivedClass::fn2() is called."<<endl;
		};
};

int main(){
	DerivedClass d1;
	d1.fn1();
	d1.fn2();
	DerivedClass *d2 = &d1;
	d2->fn1();
	d2->fn2();
	BaseClass *b1 = &d1;
	b1->fn1();
	b1->fn2();
	return 0;
}

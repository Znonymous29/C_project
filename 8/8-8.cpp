#include<iostream>
using namespace std;

class BaseClass{
	public:
		BaseClass(){
			cout << "BaseClass is called..\n";
		}
		~BaseClass(){
			cout << "BaseClass is destroyed..\n";
		}
		virtual void fn1(){
			cout << "BaseClass fn1() is called..\n";
		};
		void fn2(){
			cout << "BaseClass fn2() is called..\n";
		}
};

class DerivedClass:public BaseClass{
	public:
		DerivedClass(){
			cout << "DerivedClass is called..\n";
		}
		~DerivedClass(){
			cout << "DerivedClass is destroyed..\n";
		}
		void fn1(){
			cout << "DerivedClass fn1() is called..\n";
		}
		void fn2(){
			cout << "DerivedClass fn2() is called..\n";
		}
};

int main(){
	DerivedClass d1;
	BaseClass *b = &d1;
	b->fn1();
	b->fn2();
	DerivedClass *d = &d1;
	d->fn1();
	d->fn2();
	return 0;
}

#include<iostream>
using namespace std;

class BaseClass{
	public:
		BaseClass(){
			cout << "BaseClass is called..\n";
		}
		virtual ~BaseClass(){
			cout << "BaseClass is destroyed..\n";
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
};

int main(){
	BaseClass *b = new DerivedClass;
	delete b;
	return 0;
}

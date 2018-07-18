#include<iostream>
using namespace std;

class Counter{
	public:
		Counter();
		Counter(int initValue);
		~Counter(){
		};
		int getValue()const{return value;};
		void setValue(int x){
			value = x;	
		};
		Counter operator+(const Counter &);
	private:
		int value;
};  

Counter::Counter():value(0){	
};

Counter::Counter(int initValue):value(initValue){
};
	
Counter Counter::operator+(const Counter &rhs){
	return Counter(value + rhs.getValue());
};

int main(){
	Counter c0,c1(1),c2(2);
	cout <<"c0的值" << c0.getValue() << endl;
	c0 = c1+c2;
	cout <<"c0之后的值" << c0.getValue() << endl;
	return 0; 
}

#include <iostream>
using namespace std;

int main(){
	int a;
	int *p= &a;
	int &r = a;
	*p = 10;
	cout << "a的值为：" << a <<endl;
	r = 5;
	cout << "a的值为：" << a <<endl;
	return 0;
} 

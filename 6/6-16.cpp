#include <iostream>
using namespace std;

int main(){
	int a;
	int *p= &a;
	int &r = a;
	*p = 10;
	cout << "a��ֵΪ��" << a <<endl;
	r = 5;
	cout << "a��ֵΪ��" << a <<endl;
	return 0;
} 

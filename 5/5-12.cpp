#include<iostream>
using namespace std;

void fn1() {
	static int n;
	n++;
	cout << "n��ֵΪ��" << n << endl;
}

int main() {
	for (int i=0;i<10;i++){
		fn1();
	}
}; 

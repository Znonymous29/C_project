#include <iostream>
using namespace std;

int fib(int n){
	int f;
	if(n==1|n==2)
		f = 1;
	else
		f = fib(n-1)+fib(n-2);
	return f;
}

int main(){
	int a;
	cout << "����������" << endl;
	cin >> a;
	cout << "Fibonacci����Ϊ:" << fib(a) << endl;
}

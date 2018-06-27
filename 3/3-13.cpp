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
	cout << "请输入整数" << endl;
	cin >> a;
	cout << "Fibonacci级数为:" << fib(a) << endl;
}

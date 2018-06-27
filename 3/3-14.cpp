#include <iostream>
using namespace std;

float lerad(int n,float x){
	int f;
	if (n==0)
		f = 1;
	else if(n==1)
		f = x;
	else
		f = ((2*n-1)*x*lerad(n-1,x)-(n-1)*lerad(n-2,x))/n;
	
	return f;
}

int main(){
	int a;
	float b;
	cout << "请输入阶数" << endl;
	cin >> a;
	cout << "请输入未知数的值" << endl;
	cin >> b;
	cout << a << "阶勒让德多项式的值为:" << lerad(a,b) << endl;
}

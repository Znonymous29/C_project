#include <iostream>
using namespace std;

int sum(int n){
	int f;
	if(n==1)
		f = 1;
	else
		f = sum(n-1)+n;
	return f;
}

int main(){
	int number;
	cout << "请输入整数" << endl;
	cin >> number;
	cout << "计算和为：" << sum(number) <<endl;
}

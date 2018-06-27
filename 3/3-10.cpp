#include <iostream>
using namespace std;

int gcd(int a,int b){
	int temp;
	if (a<b){
		temp=a;
		a=b;
		b=temp;
	}
	while(a%b != 0){
		temp=a%b;
		a=b;
		b=temp;
	}
	return b;
}

int lcm(int a,int b){
	return a*b/gcd(a,b);
}

int main(){
	int x,y;
	cout << "输入两个整数。第一个数：" <<endl;
	cin >> x;
	cout << "第二个数：" <<endl;
	cin >> y;
	cout << "最大公约数为：" << gcd(x,y) << " 最小公倍数为：" << lcm(x,y) << endl;
}

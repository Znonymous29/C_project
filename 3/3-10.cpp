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
	cout << "����������������һ������" <<endl;
	cin >> x;
	cout << "�ڶ�������" <<endl;
	cin >> y;
	cout << "���Լ��Ϊ��" << gcd(x,y) << " ��С������Ϊ��" << lcm(x,y) << endl;
}

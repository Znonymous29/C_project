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
	cout << "���������" << endl;
	cin >> a;
	cout << "������δ֪����ֵ" << endl;
	cin >> b;
	cout << a << "�����õ¶���ʽ��ֵΪ:" << lerad(a,b) << endl;
}

#include <iostream>
using namespace std;

int getPower(int x,int y){
	int f=1;
	if (y<0)
		f = 0;
	else
		while(y>0){
			f*=x;
			y--;
		}
	return f;
}
double getPower(double x,int y){
	double f=1;
	if (y<0)
		f = 0;
	else
		while(y>0){
			f*=x;
			y--;
		}
	return f;
}

int main(){
	int a,m;
	double b; 
	cout << "����һ������" << endl;
	cin >> a;
	cout << "����һ��ʵ��" << endl;
	cin >> b;
	cout << "����һ��ָ��" << endl;
	cin >> m;
	cout << "���am��ֵ" << getPower(a,m)<<endl;
	cout << "���bm��ֵ" << getPower(b,m)<<endl;
}

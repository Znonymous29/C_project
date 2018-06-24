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
	cout << "输入一个整数" << endl;
	cin >> a;
	cout << "输入一个实数" << endl;
	cin >> b;
	cout << "输入一个指数" << endl;
	cin >> m;
	cout << "输出am的值" << getPower(a,m)<<endl;
	cout << "输出bm的值" << getPower(b,m)<<endl;
}

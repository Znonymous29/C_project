#include <iostream>
using namespace std;

short int parma(unsigned short int x,unsigned short int y){
	if (y == 0)
		return -1;
	else
		return x/y;
}

int main(){
	unsigned short int a,b;
	short int ans;
	cout << "Enter two numbers.\n Number one: ";
	cin >> a;
	cout << "Number two: ";
	cin >> b;
	ans = parma(a, b);
	if	(ans > -1)
		cout << "Answer: " << ans;
	else
		cout << "Error, can't divide by zero!";
	return 0;
}

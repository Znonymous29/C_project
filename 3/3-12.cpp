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
	cout << "����������" << endl;
	cin >> number;
	cout << "�����Ϊ��" << sum(number) <<endl;
}

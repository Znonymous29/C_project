#include <iostream>
using namespace std;

bool prime(int x){
	int count = 0;
	for(int i=1;i<=x;i++){
		if( x % i == 0)
			count++;
	}
	if(count == 2)
		return true;
	else
		return false;
}

int main(){
	int number;
	cout << "请输入一个整数：" << endl;
	cin >> number;
	if (prime(number)) 
		cout << number << "该整数是质数" << endl;
	else
		cout << number << "该整数不是质数" << endl;
	return 0; 
	
}

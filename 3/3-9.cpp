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
	cout << "������һ��������" << endl;
	cin >> number;
	if (prime(number)) 
		cout << number << "������������" << endl;
	else
		cout << number << "��������������" << endl;
	return 0; 
	
}

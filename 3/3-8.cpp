#include <iostream>
using namespace std;

double temptrans(int F){
	return (F-32)*5/9.0;
}

int main(){
	int F;
	cout << "�����뻪���¶�:" << endl;
	cin >> F;
	cout << "�����¶�Ϊ��" << temptrans(F) << endl;
}

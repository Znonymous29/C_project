#include <iostream>
using namespace std;

double temptrans(int F){
	return (F-32)*5/9.0;
}

int main(){
	int F;
	cout << "请输入华氏温度:" << endl;
	cin >> F;
	cout << "摄氏温度为：" << temptrans(F) << endl;
}

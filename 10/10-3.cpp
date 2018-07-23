#include <iostream>
#include <vector>
using namespace std; 

int main(){
	vector<int>s;
	int temp=1;
	do{
		cout << "输入数字，输入0退出：";
		cin >> temp;
		s.push_back(temp);
		cout << "s的容量为：" << s.capacity() << endl;
	}while(temp!=0);
	return 0;
}

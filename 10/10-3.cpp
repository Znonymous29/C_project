#include <iostream>
#include <vector>
using namespace std; 

int main(){
	vector<int>s;
	int temp=1;
	do{
		cout << "�������֣�����0�˳���";
		cin >> temp;
		s.push_back(temp);
		cout << "s������Ϊ��" << s.capacity() << endl;
	}while(temp!=0);
	return 0;
}
